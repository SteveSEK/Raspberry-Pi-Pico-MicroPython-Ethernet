# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# compile ASM with /usr/bin/arm-none-eabi-gcc
# compile C with /usr/bin/arm-none-eabi-gcc
# compile CXX with /usr/bin/arm-none-eabi-g++
ASM_FLAGS = -mcpu=cortex-m0plus -mthumb -Os -DNDEBUG   -DMBEDTLS_CONFIG_FILE=\"mbedtls/mbedtls_config.h\" -Wall -Werror -ffunction-sections -fdata-sections

ASM_DEFINES = -DCFG_TUSB_DEBUG=0 -DCFG_TUSB_MCU=OPT_MCU_RP2040 -DCFG_TUSB_OS=OPT_OS_PICO -DFFCONF_H=\"/home/work/micropython/lib/oofatfs/ffconf.h\" -DLFS1_NO_ASSERT -DLFS1_NO_DEBUG -DLFS1_NO_ERROR -DLFS1_NO_MALLOC -DLFS1_NO_WARN -DLFS2_NO_ASSERT -DLFS2_NO_DEBUG -DLFS2_NO_ERROR -DLFS2_NO_MALLOC -DLFS2_NO_WARN -DLIB_PICO_BIT_OPS=1 -DLIB_PICO_BIT_OPS_PICO=1 -DLIB_PICO_DIVIDER=1 -DLIB_PICO_DIVIDER_HARDWARE=1 -DLIB_PICO_DOUBLE=1 -DLIB_PICO_DOUBLE_PICO=1 -DLIB_PICO_FIX_RP2040_USB_DEVICE_ENUMERATION=1 -DLIB_PICO_FLOAT=1 -DLIB_PICO_FLOAT_PICO=1 -DLIB_PICO_INT64_OPS=1 -DLIB_PICO_INT64_OPS_PICO=1 -DLIB_PICO_MALLOC=1 -DLIB_PICO_MEM_OPS=1 -DLIB_PICO_MEM_OPS_PICO=1 -DLIB_PICO_MULTICORE=1 -DLIB_PICO_PLATFORM=1 -DLIB_PICO_PRINTF=1 -DLIB_PICO_PRINTF_PICO=1 -DLIB_PICO_RUNTIME=1 -DLIB_PICO_STANDARD_LINK=1 -DLIB_PICO_STDIO=1 -DLIB_PICO_STDIO_UART=1 -DLIB_PICO_STDLIB=1 -DLIB_PICO_SYNC=1 -DLIB_PICO_SYNC_CORE=1 -DLIB_PICO_SYNC_CRITICAL_SECTION=1 -DLIB_PICO_SYNC_MUTEX=1 -DLIB_PICO_SYNC_SEM=1 -DLIB_PICO_TIME=1 -DLIB_PICO_UNIQUE_ID=1 -DLIB_PICO_UTIL=1 -DLIB_TINYUSB_DEVICE=1 -DMICROPY_BUILD_TYPE="\"GNU 9.2.1 MinSizeRel\"" -DMICROPY_MODULE_FROZEN_MPY="(1)" -DMICROPY_PY_WIZNET5K=5105 -DMICROPY_QSTR_EXTRA_POOL=mp_qstr_frozen_const_pool -DPICO_BOARD=\"pico\" -DPICO_BUILD=1 -DPICO_CMAKE_BUILD_TYPE=\"MinSizeRel\" -DPICO_COPY_TO_RAM=0 -DPICO_CORE1_STACK_SIZE=0 -DPICO_CXX_ENABLE_EXCEPTIONS=0 -DPICO_FLOAT_PROPAGATE_NANS=1 -DPICO_NO_BI_STDIO_UART=1 -DPICO_NO_FLASH=0 -DPICO_NO_HARDWARE=0 -DPICO_NO_PROGRAM_VERSION_STRING=1 -DPICO_ON_DEVICE=1 -DPICO_PROGRAM_NAME=\"MicroPython\" -DPICO_RP2040_USB_DEVICE_ENUMERATION_FIX=1 -DPICO_STACK_SIZE=0x2000 -DPICO_TARGET_NAME=\"firmware\" -DPICO_USE_BLOCKED_RAM=0 -D_WIZCHIP_=5105

ASM_INCLUDES = -I/home/work/micropython/drivers/wiznet5k -I/home/work/micropython/drivers/wiznet5k/ethernet/w5105 -I/home/work/micropython/ports/rp2/lwip_inc -I/home/work/micropython/lib/lwip/src/include -I/home/work/micropython/lib/mbedtls/include -I/home/work/micropython -I/home/work/micropython/ports/rp2/boards/PICO -I/home/work/micropython/ports/rp2 -I/home/work/micropython/ports/rp2/build-PICO -I/home/work/micropython/driver/wiznet5k -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_adc/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_base/include -I/home/work/micropython/ports/rp2/build-PICO/generated/pico_base -I/home/work/micropython/lib/pico-sdk/src/boards/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include -I/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include -I/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_claim/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_resets/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_clocks/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_gpio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_irq/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_sync/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_time/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_util/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pll/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_vreg/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_watchdog/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_xosc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_dma/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_bootrom/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_i2c/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pwm/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_rtc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_uart/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_stdio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_printf/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_stdlib/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_divider/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_runtime/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_bit_ops/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_divider/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_double/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_int64_ops/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_float/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_malloc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/boot_stage2/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_stdio_uart/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_unique_id/include -I/home/work/micropython/lib/tinyusb/src -I/home/work/micropython/lib/tinyusb/src/common -I/home/work/micropython/lib/tinyusb/hw -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/include 

C_FLAGS = -mcpu=cortex-m0plus -mthumb -Os -DNDEBUG   -DMBEDTLS_CONFIG_FILE=\"mbedtls/mbedtls_config.h\" -Wall -Werror -ffunction-sections -fdata-sections

C_DEFINES = -DCFG_TUSB_DEBUG=0 -DCFG_TUSB_MCU=OPT_MCU_RP2040 -DCFG_TUSB_OS=OPT_OS_PICO -DFFCONF_H=\"/home/work/micropython/lib/oofatfs/ffconf.h\" -DLFS1_NO_ASSERT -DLFS1_NO_DEBUG -DLFS1_NO_ERROR -DLFS1_NO_MALLOC -DLFS1_NO_WARN -DLFS2_NO_ASSERT -DLFS2_NO_DEBUG -DLFS2_NO_ERROR -DLFS2_NO_MALLOC -DLFS2_NO_WARN -DLIB_PICO_BIT_OPS=1 -DLIB_PICO_BIT_OPS_PICO=1 -DLIB_PICO_DIVIDER=1 -DLIB_PICO_DIVIDER_HARDWARE=1 -DLIB_PICO_DOUBLE=1 -DLIB_PICO_DOUBLE_PICO=1 -DLIB_PICO_FIX_RP2040_USB_DEVICE_ENUMERATION=1 -DLIB_PICO_FLOAT=1 -DLIB_PICO_FLOAT_PICO=1 -DLIB_PICO_INT64_OPS=1 -DLIB_PICO_INT64_OPS_PICO=1 -DLIB_PICO_MALLOC=1 -DLIB_PICO_MEM_OPS=1 -DLIB_PICO_MEM_OPS_PICO=1 -DLIB_PICO_MULTICORE=1 -DLIB_PICO_PLATFORM=1 -DLIB_PICO_PRINTF=1 -DLIB_PICO_PRINTF_PICO=1 -DLIB_PICO_RUNTIME=1 -DLIB_PICO_STANDARD_LINK=1 -DLIB_PICO_STDIO=1 -DLIB_PICO_STDIO_UART=1 -DLIB_PICO_STDLIB=1 -DLIB_PICO_SYNC=1 -DLIB_PICO_SYNC_CORE=1 -DLIB_PICO_SYNC_CRITICAL_SECTION=1 -DLIB_PICO_SYNC_MUTEX=1 -DLIB_PICO_SYNC_SEM=1 -DLIB_PICO_TIME=1 -DLIB_PICO_UNIQUE_ID=1 -DLIB_PICO_UTIL=1 -DLIB_TINYUSB_DEVICE=1 -DMICROPY_BUILD_TYPE="\"GNU 9.2.1 MinSizeRel\"" -DMICROPY_MODULE_FROZEN_MPY="(1)" -DMICROPY_PY_WIZNET5K=5105 -DMICROPY_QSTR_EXTRA_POOL=mp_qstr_frozen_const_pool -DPICO_BOARD=\"pico\" -DPICO_BUILD=1 -DPICO_CMAKE_BUILD_TYPE=\"MinSizeRel\" -DPICO_COPY_TO_RAM=0 -DPICO_CORE1_STACK_SIZE=0 -DPICO_CXX_ENABLE_EXCEPTIONS=0 -DPICO_FLOAT_PROPAGATE_NANS=1 -DPICO_NO_BI_STDIO_UART=1 -DPICO_NO_FLASH=0 -DPICO_NO_HARDWARE=0 -DPICO_NO_PROGRAM_VERSION_STRING=1 -DPICO_ON_DEVICE=1 -DPICO_PROGRAM_NAME=\"MicroPython\" -DPICO_RP2040_USB_DEVICE_ENUMERATION_FIX=1 -DPICO_STACK_SIZE=0x2000 -DPICO_TARGET_NAME=\"firmware\" -DPICO_USE_BLOCKED_RAM=0 -D_WIZCHIP_=5105

C_INCLUDES = -I/home/work/micropython/drivers/wiznet5k -I/home/work/micropython/drivers/wiznet5k/ethernet/w5105 -I/home/work/micropython/ports/rp2/lwip_inc -I/home/work/micropython/lib/lwip/src/include -I/home/work/micropython/lib/mbedtls/include -I/home/work/micropython -I/home/work/micropython/ports/rp2/boards/PICO -I/home/work/micropython/ports/rp2 -I/home/work/micropython/ports/rp2/build-PICO -I/home/work/micropython/driver/wiznet5k -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_adc/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_base/include -I/home/work/micropython/ports/rp2/build-PICO/generated/pico_base -I/home/work/micropython/lib/pico-sdk/src/boards/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include -I/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include -I/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_claim/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_resets/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_clocks/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_gpio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_irq/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_sync/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_time/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_util/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pll/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_vreg/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_watchdog/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_xosc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_dma/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_bootrom/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_i2c/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pwm/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_rtc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_uart/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_stdio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_printf/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_stdlib/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_divider/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_runtime/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_bit_ops/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_divider/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_double/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_int64_ops/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_float/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_malloc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/boot_stage2/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_stdio_uart/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_unique_id/include -I/home/work/micropython/lib/tinyusb/src -I/home/work/micropython/lib/tinyusb/src/common -I/home/work/micropython/lib/tinyusb/hw -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/include 

CXX_FLAGS = -mcpu=cortex-m0plus -mthumb -Os -DNDEBUG   -DMBEDTLS_CONFIG_FILE=\"mbedtls/mbedtls_config.h\" -Wall -Werror -ffunction-sections -fdata-sections -fno-exceptions -fno-unwind-tables -fno-rtti -fno-use-cxa-atexit

CXX_DEFINES = -DCFG_TUSB_DEBUG=0 -DCFG_TUSB_MCU=OPT_MCU_RP2040 -DCFG_TUSB_OS=OPT_OS_PICO -DFFCONF_H=\"/home/work/micropython/lib/oofatfs/ffconf.h\" -DLFS1_NO_ASSERT -DLFS1_NO_DEBUG -DLFS1_NO_ERROR -DLFS1_NO_MALLOC -DLFS1_NO_WARN -DLFS2_NO_ASSERT -DLFS2_NO_DEBUG -DLFS2_NO_ERROR -DLFS2_NO_MALLOC -DLFS2_NO_WARN -DLIB_PICO_BIT_OPS=1 -DLIB_PICO_BIT_OPS_PICO=1 -DLIB_PICO_DIVIDER=1 -DLIB_PICO_DIVIDER_HARDWARE=1 -DLIB_PICO_DOUBLE=1 -DLIB_PICO_DOUBLE_PICO=1 -DLIB_PICO_FIX_RP2040_USB_DEVICE_ENUMERATION=1 -DLIB_PICO_FLOAT=1 -DLIB_PICO_FLOAT_PICO=1 -DLIB_PICO_INT64_OPS=1 -DLIB_PICO_INT64_OPS_PICO=1 -DLIB_PICO_MALLOC=1 -DLIB_PICO_MEM_OPS=1 -DLIB_PICO_MEM_OPS_PICO=1 -DLIB_PICO_MULTICORE=1 -DLIB_PICO_PLATFORM=1 -DLIB_PICO_PRINTF=1 -DLIB_PICO_PRINTF_PICO=1 -DLIB_PICO_RUNTIME=1 -DLIB_PICO_STANDARD_LINK=1 -DLIB_PICO_STDIO=1 -DLIB_PICO_STDIO_UART=1 -DLIB_PICO_STDLIB=1 -DLIB_PICO_SYNC=1 -DLIB_PICO_SYNC_CORE=1 -DLIB_PICO_SYNC_CRITICAL_SECTION=1 -DLIB_PICO_SYNC_MUTEX=1 -DLIB_PICO_SYNC_SEM=1 -DLIB_PICO_TIME=1 -DLIB_PICO_UNIQUE_ID=1 -DLIB_PICO_UTIL=1 -DLIB_TINYUSB_DEVICE=1 -DMICROPY_BUILD_TYPE="\"GNU 9.2.1 MinSizeRel\"" -DMICROPY_MODULE_FROZEN_MPY="(1)" -DMICROPY_PY_WIZNET5K=5105 -DMICROPY_QSTR_EXTRA_POOL=mp_qstr_frozen_const_pool -DPICO_BOARD=\"pico\" -DPICO_BUILD=1 -DPICO_CMAKE_BUILD_TYPE=\"MinSizeRel\" -DPICO_COPY_TO_RAM=0 -DPICO_CORE1_STACK_SIZE=0 -DPICO_CXX_ENABLE_EXCEPTIONS=0 -DPICO_FLOAT_PROPAGATE_NANS=1 -DPICO_NO_BI_STDIO_UART=1 -DPICO_NO_FLASH=0 -DPICO_NO_HARDWARE=0 -DPICO_NO_PROGRAM_VERSION_STRING=1 -DPICO_ON_DEVICE=1 -DPICO_PROGRAM_NAME=\"MicroPython\" -DPICO_RP2040_USB_DEVICE_ENUMERATION_FIX=1 -DPICO_STACK_SIZE=0x2000 -DPICO_TARGET_NAME=\"firmware\" -DPICO_USE_BLOCKED_RAM=0 -D_WIZCHIP_=5105

CXX_INCLUDES = -I/home/work/micropython/drivers/wiznet5k -I/home/work/micropython/drivers/wiznet5k/ethernet/w5105 -I/home/work/micropython/ports/rp2/lwip_inc -I/home/work/micropython/lib/lwip/src/include -I/home/work/micropython/lib/mbedtls/include -I/home/work/micropython -I/home/work/micropython/ports/rp2/boards/PICO -I/home/work/micropython/ports/rp2 -I/home/work/micropython/ports/rp2/build-PICO -I/home/work/micropython/driver/wiznet5k -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_adc/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_base/include -I/home/work/micropython/ports/rp2/build-PICO/generated/pico_base -I/home/work/micropython/lib/pico-sdk/src/boards/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include -I/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include -I/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_claim/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_resets/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_clocks/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_gpio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_irq/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_sync/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_time/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_util/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pll/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_vreg/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_watchdog/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_xosc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_dma/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_bootrom/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_i2c/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_pwm/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_rtc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_uart/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_stdio/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_printf/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_stdlib/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_divider/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_runtime/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_bit_ops/include -I/home/work/micropython/lib/pico-sdk/src/common/pico_divider/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_double/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_int64_ops/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_float/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_malloc/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/boot_stage2/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_stdio_uart/include -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_unique_id/include -I/home/work/micropython/lib/tinyusb/src -I/home/work/micropython/lib/tinyusb/src/common -I/home/work/micropython/lib/tinyusb/hw -I/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/include 

# Custom options: CMakeFiles/firmware.dir/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_double/double_math.c.obj_OPTIONS = -Wno-error=uninitialized

# Custom options: CMakeFiles/firmware.dir/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_float/float_math.c.obj_OPTIONS = -Wno-error=uninitialized

# Custom options: CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/portable/raspberrypi/rp2040/dcd_rp2040.c.obj_OPTIONS = -Wno-error=array-bounds;-Wno-error=unused-but-set-variable

# Custom options: CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/portable/raspberrypi/rp2040/rp2040_usb.c.obj_OPTIONS = -Wno-error=array-bounds;-Wno-error=unused-but-set-variable

