cmake_minimum_required(VERSION 3.12)

# Set build type to reduce firmware size
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE MinSizeRel)
endif()


#network
#if(NOT MICROPY_PY_WIZNET5K)
#    SET(MICROPY_PY_WIZNET5K 5500)
#endif()

# Set main target and component locations
set(MICROPY_TARGET firmware)
get_filename_component(MICROPY_DIR "../.." ABSOLUTE)
if (PICO_SDK_PATH_OVERRIDE)
    set(PICO_SDK_PATH ${PICO_SDK_PATH_OVERRIDE})
else()
    set(PICO_SDK_PATH ../../lib/pico-sdk)
endif()

# Use the local tinyusb instead of the one in pico-sdk
set(PICO_TINYUSB_PATH ${MICROPY_DIR}/lib/tinyusb)

# Set the location of this port's directory.
set(MICROPY_PORT_DIR ${CMAKE_SOURCE_DIR})

# Set the board if it's not already set.
if(NOT MICROPY_BOARD)
    set(MICROPY_BOARD PICO)
endif()

# Set the PICO_BOARD if it's not already set.
if(NOT PICO_BOARD)
    string(TOLOWER ${MICROPY_BOARD} PICO_BOARD)
endif()

# Set the board directory and check that it exists.
if(NOT MICROPY_BOARD_DIR)
    set(MICROPY_BOARD_DIR ${MICROPY_PORT_DIR}/boards/${MICROPY_BOARD})
endif()
if(NOT EXISTS ${MICROPY_BOARD_DIR}/mpconfigboard.cmake)
    message(FATAL_ERROR "Invalid MICROPY_BOARD specified: ${MICROPY_BOARD}")
endif()

# Include board config
include(${MICROPY_BOARD_DIR}/mpconfigboard.cmake)

# Include component cmake fragments
include(${MICROPY_DIR}/py/py.cmake)
include(${MICROPY_DIR}/extmod/extmod.cmake)
include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

# Define the top-level project
project(${MICROPY_TARGET})

pico_sdk_init()

include(${MICROPY_DIR}/py/usermod.cmake)

if (MICROPY_PY_WIZNET5K)
   INCLUDE_DIRECTORIES(${MICROPY_DIR}/drivers/wiznet5k/ ${MICROPY_DIR}/drivers/wiznet5k/ethernet/w${MICROPY_PY_WIZNET5K}) 
   ########################################################################################
   ##211201 add lwip, mbedtls include 
   INCLUDE_DIRECTORIES(${MICROPY_DIR}/ports/rp2/lwip_inc/ ${MICROPY_DIR}/lib/lwip/src/include/) 
   INCLUDE_DIRECTORIES(${MICROPY_DIR}/lib/mbedtls/include/) 
   ########################################################################################
endif()

add_executable(${MICROPY_TARGET})

set(MICROPY_QSTRDEFS_PORT
    ${PROJECT_SOURCE_DIR}/qstrdefsport.h
)

set(MICROPY_SOURCE_LIB
    ${MICROPY_DIR}/lib/littlefs/lfs1.c
    ${MICROPY_DIR}/lib/littlefs/lfs1_util.c
    ${MICROPY_DIR}/lib/littlefs/lfs2.c
    ${MICROPY_DIR}/lib/littlefs/lfs2_util.c
    ${MICROPY_DIR}/lib/oofatfs/ff.c
    ${MICROPY_DIR}/lib/oofatfs/ffunicode.c
    ${MICROPY_DIR}/shared/netutils/netutils.c
    ${MICROPY_DIR}/shared/readline/readline.c
    ${MICROPY_DIR}/shared/runtime/gchelper_m0.s
    ${MICROPY_DIR}/shared/runtime/gchelper_native.c
    ${MICROPY_DIR}/shared/runtime/mpirq.c
    ${MICROPY_DIR}/shared/runtime/pyexec.c
    ${MICROPY_DIR}/shared/runtime/stdout_helpers.c
    ${MICROPY_DIR}/shared/runtime/sys_stdio_mphal.c
    ${MICROPY_DIR}/shared/timeutils/timeutils.c
    #############################################################################
    ##211209 add mbedtls component
    ${MICROPY_DIR}/lib/lwip/src/apps/mdns/mdns.c     
    ${MICROPY_DIR}/lib/lwip/src/core/def.c           
    ${MICROPY_DIR}/lib/lwip/src/core/dns.c           
    ${MICROPY_DIR}/lib/lwip/src/core/inet_chksum.c   
    ${MICROPY_DIR}/lib/lwip/src/core/init.c          
    ${MICROPY_DIR}/lib/lwip/src/core/ip.c            
    ${MICROPY_DIR}/lib/lwip/src/core/mem.c           
    ${MICROPY_DIR}/lib/lwip/src/core/memp.c          
    ${MICROPY_DIR}/lib/lwip/src/core/netif.c         
    ${MICROPY_DIR}/lib/lwip/src/core/pbuf.c          
    ${MICROPY_DIR}/lib/lwip/src/core/raw.c           
    ${MICROPY_DIR}/lib/lwip/src/core/stats.c         
    ${MICROPY_DIR}/lib/lwip/src/core/sys.c           
    ${MICROPY_DIR}/lib/lwip/src/core/tcp.c           
    ${MICROPY_DIR}/lib/lwip/src/core/tcp_in.c        
    ${MICROPY_DIR}/lib/lwip/src/core/tcp_out.c       
    ${MICROPY_DIR}/lib/lwip/src/core/timeouts.c      
    ${MICROPY_DIR}/lib/lwip/src/core/udp.c           
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/autoip.c   
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/dhcp.c     
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/etharp.c   
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/icmp.c     
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/igmp.c     
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/ip4_addr.c 
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/ip4.c      
    ${MICROPY_DIR}/lib/lwip/src/core/ipv4/ip4_frag.c 
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/dhcp6.c    
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/ethip6.c   
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/icmp6.c    
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/inet6.c    
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/ip6_addr.c 
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/ip6.c      
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/ip6_frag.c 
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/mld6.c     
    ${MICROPY_DIR}/lib/lwip/src/core/ipv6/nd6.c      
    ${MICROPY_DIR}/lib/lwip/src/netif/ethernet.c     
    ${MICROPY_DIR}/extmod/modusocket.c
    ${MICROPY_DIR}/shared/netutils/netutils.c
    ${MICROPY_DIR}/shared/netutils/trace.c
    ${MICROPY_DIR}/lib/mbedtls/library/aes.c
    ${MICROPY_DIR}/lib/mbedtls/library/aesni.c
    ${MICROPY_DIR}/lib/mbedtls/library/arc4.c
    ${MICROPY_DIR}/lib/mbedtls/library/asn1parse.c
    ${MICROPY_DIR}/lib/mbedtls/library/asn1write.c
    ${MICROPY_DIR}/lib/mbedtls/library/base64.c
    ${MICROPY_DIR}/lib/mbedtls/library/bignum.c
    ${MICROPY_DIR}/lib/mbedtls/library/blowfish.c
    ${MICROPY_DIR}/lib/mbedtls/library/camellia.c
    ${MICROPY_DIR}/lib/mbedtls/library/ccm.c
    ${MICROPY_DIR}/lib/mbedtls/library/certs.c
    ${MICROPY_DIR}/lib/mbedtls/library/chacha20.c
    ${MICROPY_DIR}/lib/mbedtls/library/chachapoly.c
    ${MICROPY_DIR}/lib/mbedtls/library/cipher.c
    ${MICROPY_DIR}/lib/mbedtls/library/cipher_wrap.c
    ${MICROPY_DIR}/lib/mbedtls/library/cmac.c
    ${MICROPY_DIR}/lib/mbedtls/library/ctr_drbg.c
    ${MICROPY_DIR}/lib/mbedtls/library/debug.c
    ${MICROPY_DIR}/lib/mbedtls/library/des.c
    ${MICROPY_DIR}/lib/mbedtls/library/dhm.c
    ${MICROPY_DIR}/lib/mbedtls/library/ecdh.c
    ${MICROPY_DIR}/lib/mbedtls/library/ecdsa.c
    ${MICROPY_DIR}/lib/mbedtls/library/ecjpake.c
    ${MICROPY_DIR}/lib/mbedtls/library/ecp.c
    ${MICROPY_DIR}/lib/mbedtls/library/ecp_curves.c
    ${MICROPY_DIR}/lib/mbedtls/library/entropy.c
    ${MICROPY_DIR}/lib/mbedtls/library/entropy_poll.c
    ${MICROPY_DIR}/lib/mbedtls/library/error.c
    ${MICROPY_DIR}/lib/mbedtls/library/gcm.c
    ${MICROPY_DIR}/lib/mbedtls/library/havege.c
    ${MICROPY_DIR}/lib/mbedtls/library/hmac_drbg.c
    ${MICROPY_DIR}/lib/mbedtls/library/md2.c
    ${MICROPY_DIR}/lib/mbedtls/library/md4.c
    ${MICROPY_DIR}/lib/mbedtls/library/md5.c
    ${MICROPY_DIR}/lib/mbedtls/library/md.c
    ${MICROPY_DIR}/lib/mbedtls/library/md_wrap.c
    ${MICROPY_DIR}/lib/mbedtls/library/oid.c
    ${MICROPY_DIR}/lib/mbedtls/library/padlock.c
    ${MICROPY_DIR}/lib/mbedtls/library/pem.c
    ${MICROPY_DIR}/lib/mbedtls/library/pk.c
    ${MICROPY_DIR}/lib/mbedtls/library/pkcs11.c
    ${MICROPY_DIR}/lib/mbedtls/library/pkcs12.c
    ${MICROPY_DIR}/lib/mbedtls/library/pkcs5.c
    ${MICROPY_DIR}/lib/mbedtls/library/pkparse.c
    ${MICROPY_DIR}/lib/mbedtls/library/pk_wrap.c
    ${MICROPY_DIR}/lib/mbedtls/library/pkwrite.c
    ${MICROPY_DIR}/lib/mbedtls/library/platform.c
    ${MICROPY_DIR}/lib/mbedtls/library/platform_util.c
    ${MICROPY_DIR}/lib/mbedtls/library/poly1305.c
    ${MICROPY_DIR}/lib/mbedtls/library/ripemd160.c
    ${MICROPY_DIR}/lib/mbedtls/library/rsa.c
    ${MICROPY_DIR}/lib/mbedtls/library/rsa_internal.c
    ${MICROPY_DIR}/lib/mbedtls/library/sha1.c
    ${MICROPY_DIR}/lib/mbedtls/library/sha256.c
    ${MICROPY_DIR}/lib/mbedtls/library/sha512.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_cache.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_ciphersuites.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_cli.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_cookie.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_srv.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_ticket.c
    ${MICROPY_DIR}/lib/mbedtls/library/ssl_tls.c
    ${MICROPY_DIR}/lib/mbedtls/library/timing.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509_create.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509_crl.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509_crt.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509_csr.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509write_crt.c
    ${MICROPY_DIR}/lib/mbedtls/library/x509write_csr.c
    ${MICROPY_DIR}/lib/mbedtls/library/xtea.c
)


if (MICROPY_PY_WIZNET5K)
    set(MICROPY_SOURCE_DRIVERS
        ${MICROPY_DIR}/drivers/bus/softspi.c
    	${MICROPY_DIR}/drivers/wiznet5k/ethernet/w${MICROPY_PY_WIZNET5K}/w${MICROPY_PY_WIZNET5K}.c
        ${MICROPY_DIR}/drivers/wiznet5k/ethernet/socket.c
        ${MICROPY_DIR}/drivers/wiznet5k/ethernet/wizchip_conf.c
        ${MICROPY_DIR}/drivers/wiznet5k/internet/dns/dns.c
        ${MICROPY_DIR}/extmod/modnetwork.c        
        ${MICROPY_DIR}/extmod/modusocket.c
        ${PROJECT_SOURCE_DIR}/modnwwiznet5k.c
        ##211209 add mbedtls component
        ${MICROPY_DIR}/extmod/modlwip.c
        ${PROJECT_SOURCE_DIR}/network_wiznet5k.c        
        ${PROJECT_SOURCE_DIR}/mbedtls/mbedtls_port.c
      )
else()
    set(MICROPY_SOURCE_DRIVERS
        ${MICROPY_DIR}/drivers/bus/softspi.c
       )
	
endif()
set(MICROPY_SOURCE_PORT
    fatfs_port.c
    machine_adc.c
    machine_i2c.c
    machine_pin.c
    machine_rtc.c
    machine_spi.c
    machine_timer.c
    machine_uart.c
    machine_wdt.c
    main.c
    modmachine.c
    modrp2.c
    moduos.c
    modutime.c
    mphalport.c
    mpthreadport.c
    rp2_flash.c
    rp2_pio.c
    tusb_port.c
    uart.c
)

set(MICROPY_SOURCE_QSTR
    ${MICROPY_SOURCE_PY}
    ${MICROPY_SOURCE_EXTMOD}
    ${MICROPY_SOURCE_USERMOD}
    ${MICROPY_DIR}/shared/runtime/mpirq.c
    ${MICROPY_DIR}/shared/runtime/sys_stdio_mphal.c
    ${MICROPY_DIR}/extmod/modnetwork.c
    ${MICROPY_DIR}/extmod/modusocket.c
    ${PROJECT_SOURCE_DIR}/machine_adc.c
    ${PROJECT_SOURCE_DIR}/machine_i2c.c
    ${PROJECT_SOURCE_DIR}/machine_pin.c
    ${PROJECT_SOURCE_DIR}/machine_rtc.c
    ${PROJECT_SOURCE_DIR}/machine_spi.c
    ${PROJECT_SOURCE_DIR}/machine_timer.c
    ${PROJECT_SOURCE_DIR}/machine_uart.c
    ${PROJECT_SOURCE_DIR}/machine_wdt.c
    ${PROJECT_SOURCE_DIR}/modmachine.c
    ${PROJECT_SOURCE_DIR}/modnwwiznet5k.c
    ${PROJECT_SOURCE_DIR}/modrp2.c
    ${PROJECT_SOURCE_DIR}/moduos.c
    ${PROJECT_SOURCE_DIR}/modutime.c
    ${PROJECT_SOURCE_DIR}/rp2_flash.c
    ${PROJECT_SOURCE_DIR}/rp2_pio.c
    ##211209 add mbedtls component
    ${PROJECT_SOURCE_DIR}/network_wiznet5k.c    
    ${MICROPY_DIR}/extmod/modlwip.c
)

set(PICO_SDK_COMPONENTS
    hardware_adc
    hardware_base
    hardware_clocks
    hardware_dma
    hardware_flash
    hardware_gpio
    hardware_i2c
    hardware_irq
    hardware_pio
    hardware_pwm
    hardware_regs
    hardware_rtc
    hardware_spi
    hardware_structs
    hardware_sync
    hardware_timer
    hardware_uart
    hardware_watchdog
    pico_base_headers
    pico_binary_info
    pico_bootrom
    pico_multicore
    pico_platform
    pico_stdio
    pico_stdlib
    pico_sync
    pico_time
    pico_unique_id
    pico_util
    tinyusb_common
    tinyusb_device
)

if(MICROPY_PY_BLUETOOTH)
    list(APPEND MICROPY_SOURCE_PORT mpbthciport.c)
    target_compile_definitions(${MICROPY_TARGET} PRIVATE
        MICROPY_PY_BLUETOOTH=1
        MICROPY_PY_BLUETOOTH_ENABLE_CENTRAL_MODE=1
        MICROPY_PY_BLUETOOTH_ENABLE_PAIRING_BONDING=1
        MICROPY_PY_BLUETOOTH_ENABLE_L2CAP_CHANNELS=1
    )
endif()

if(MICROPY_BLUETOOTH_NIMBLE)
    list(APPEND MICROPY_SOURCE_PORT mpnimbleport.c)
    target_compile_definitions(${MICROPY_TARGET} PRIVATE
        MICROPY_BLUETOOTH_NIMBLE=1
        MICROPY_BLUETOOTH_NIMBLE_BINDINGS_ONLY=0
    )
    target_compile_options(${MICROPY_TARGET} PRIVATE
    # TODO: This flag is currently needed to make nimble build.
    -Wno-unused-but-set-variable
    )
    include(${MICROPY_DIR}/extmod/nimble/nimble.cmake)
    target_link_libraries(${MICROPY_TARGET} micropy_extmod_nimble)
    get_target_property(NIMBLE_INCLUDE micropy_extmod_nimble INTERFACE_INCLUDE_DIRECTORIES)
    list(APPEND MICROPY_INC_CORE ${NIMBLE_INCLUDE})
endif()

##211209 add mbedtls component
target_compile_options(${MICROPY_TARGET} PRIVATE -DMBEDTLS_CONFIG_FILE="mbedtls/mbedtls_config.h")



# Define mpy-cross flags and frozen manifest
set(MICROPY_CROSS_FLAGS -march=armv7m)
if (NOT MICROPY_FROZEN_MANIFEST)
    set(MICROPY_FROZEN_MANIFEST ${PROJECT_SOURCE_DIR}/boards/manifest.py)
endif()

target_sources(${MICROPY_TARGET} PRIVATE
    ${MICROPY_SOURCE_PY}
    ${MICROPY_SOURCE_EXTMOD}
    ${MICROPY_SOURCE_LIB}
    ${MICROPY_SOURCE_DRIVERS}
    ${MICROPY_SOURCE_PORT}
)

target_link_libraries(${MICROPY_TARGET} usermod)
if (MICROPY_PY_WIZNET5K) 
    target_include_directories(${MICROPY_TARGET} PRIVATE
       ${MICROPY_INC_CORE}
       ${MICROPY_INC_USERMOD}
       ${MICROPY_BOARD_DIR}
       "${PROJECT_SOURCE_DIR}"
       "${CMAKE_BINARY_DIR}"
       "${MICROPY_DIR}/driver/wiznet5k"
    )
else()
    target_include_directories(${MICROPY_TARGET} PRIVATE
        ${MICROPY_INC_CORE}
        ${MICROPY_INC_USERMOD}
        ${MICROPY_BOARD_DIR}
        "${PROJECT_SOURCE_DIR}"
        "${CMAKE_BINARY_DIR}"
    )  
endif()


target_compile_options(${MICROPY_TARGET} PRIVATE
    -Wall
    -Werror
)

set_source_files_properties(
    ${PICO_SDK_PATH}/src/rp2_common/pico_double/double_math.c
    ${PICO_SDK_PATH}/src/rp2_common/pico_float/float_math.c
    PROPERTIES
    COMPILE_OPTIONS "-Wno-error=uninitialized"
)

set_source_files_properties(
    ${PICO_TINYUSB_PATH}/src/portable/raspberrypi/rp2040/dcd_rp2040.c
    ${PICO_TINYUSB_PATH}/src/portable/raspberrypi/rp2040/rp2040_usb.c
    PROPERTIES
    COMPILE_OPTIONS "-Wno-error=array-bounds;-Wno-error=unused-but-set-variable"
)
if (MICROPY_PY_WIZNET5K)
    target_compile_definitions(${MICROPY_TARGET} PRIVATE
        FFCONF_H=\"${MICROPY_OOFATFS_DIR}/ffconf.h\"
        LFS1_NO_MALLOC LFS1_NO_DEBUG LFS1_NO_WARN LFS1_NO_ERROR LFS1_NO_ASSERT
        LFS2_NO_MALLOC LFS2_NO_DEBUG LFS2_NO_WARN LFS2_NO_ERROR LFS2_NO_ASSERT
        PICO_FLOAT_PROPAGATE_NANS=1
        ##211203 set PICO_STACK_SIZE
        PICO_STACK_SIZE=0x2000
        #PICO_STACK_SIZE=0x1000
        PICO_CORE1_STACK_SIZE=0
        PICO_PROGRAM_NAME="MicroPython"
        PICO_NO_PROGRAM_VERSION_STRING=1 # do it ourselves in main.c
        MICROPY_BUILD_TYPE="${CMAKE_C_COMPILER_ID} ${CMAKE_C_COMPILER_VERSION} ${CMAKE_BUILD_TYPE}"
        PICO_NO_BI_STDIO_UART=1 # we call it UART REPL
        PICO_RP2040_USB_DEVICE_ENUMERATION_FIX=1
        -D_WIZCHIP_=${MICROPY_PY_WIZNET5K}
        -DMICROPY_PY_WIZNET5K=${MICROPY_PY_WIZNET5K}
   )
else()
    target_compile_definitions(${MICROPY_TARGET} PRIVATE
        FFCONF_H=\"${MICROPY_OOFATFS_DIR}/ffconf.h\"
        LFS1_NO_MALLOC LFS1_NO_DEBUG LFS1_NO_WARN LFS1_NO_ERROR LFS1_NO_ASSERT
        LFS2_NO_MALLOC LFS2_NO_DEBUG LFS2_NO_WARN LFS2_NO_ERROR LFS2_NO_ASSERT
        PICO_FLOAT_PROPAGATE_NANS=1
        PICO_STACK_SIZE=0x2000
        PICO_CORE1_STACK_SIZE=0
        PICO_PROGRAM_NAME="MicroPython"
        PICO_NO_PROGRAM_VERSION_STRING=1 # do it ourselves in main.c
        MICROPY_BUILD_TYPE="${CMAKE_C_COMPILER_ID} ${CMAKE_C_COMPILER_VERSION} ${CMAKE_BUILD_TYPE}"
        PICO_NO_BI_STDIO_UART=1 # we call it UART REPL
        PICO_RP2040_USB_DEVICE_ENUMERATION_FIX=1    
   )
endif()



target_link_libraries(${MICROPY_TARGET}
    ${PICO_SDK_COMPONENTS}
)

if (MICROPY_HW_ENABLE_DOUBLE_TAP)
# Enable double tap reset into bootrom.
target_link_libraries(${MICROPY_TARGET}
    pico_bootsel_via_double_reset
)
endif()

# todo this is a bit brittle, but we want to move a few source files into RAM (which requires
#  a linker script modification) until we explicitly add  macro calls around the function
#  defs to move them into RAM.
if (PICO_ON_DEVICE AND NOT PICO_NO_FLASH AND NOT PICO_COPY_TO_RAM)
    pico_set_linker_script(${MICROPY_TARGET} ${CMAKE_CURRENT_LIST_DIR}/memmap_mp.ld)
endif()

pico_add_extra_outputs(${MICROPY_TARGET})

add_custom_command(TARGET ${MICROPY_TARGET}
    POST_BUILD
    COMMAND arm-none-eabi-size --format=berkeley ${PROJECT_BINARY_DIR}/${MICROPY_TARGET}.elf
    VERBATIM
)

# Collect all the include directories and compile definitions for the pico-sdk components.
foreach(comp ${PICO_SDK_COMPONENTS})
    micropy_gather_target_properties(${comp})
    micropy_gather_target_properties(${comp}_headers)
endforeach()

# Include the main MicroPython cmake rules.
include(${MICROPY_DIR}/py/mkrules.cmake)
