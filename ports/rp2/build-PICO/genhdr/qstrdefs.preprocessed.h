# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 29 "<stdin>"
# 1 "/home/work/micropython/py/mpconfig.h" 1
# 62 "/home/work/micropython/py/mpconfig.h"
# 1 "/home/work/micropython/ports/rp2/mpconfigport.h" 1
# 29 "/home/work/micropython/ports/rp2/mpconfigport.h"
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h" 1 3 4
# 34 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h" 3 4

# 34 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 30 "/home/work/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 1
# 10 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h" 1
# 16 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 1
# 10 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/assert.h" 1
# 10 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/assert.h"
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stdbool.h" 1 3 4
# 11 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/assert.h" 2







# 1 "/usr/include/newlib/assert.h" 1 3
# 9 "/usr/include/newlib/assert.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 10 "/usr/include/newlib/_ansi.h" 3
# 1 "/usr/include/newlib/newlib.h" 1 3
# 14 "/usr/include/newlib/newlib.h" 3
# 1 "/usr/include/newlib/_newlib_version.h" 1 3
# 15 "/usr/include/newlib/newlib.h" 2 3
# 11 "/usr/include/newlib/_ansi.h" 2 3
# 1 "/usr/include/newlib/sys/config.h" 1 3



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3
# 5 "/usr/include/newlib/sys/config.h" 2 3
# 1 "/usr/include/newlib/sys/features.h" 1 3
# 6 "/usr/include/newlib/sys/config.h" 2 3
# 12 "/usr/include/newlib/_ansi.h" 2 3
# 10 "/usr/include/newlib/assert.h" 2 3
# 39 "/usr/include/newlib/assert.h" 3
void __assert (const char *, int, const char *)
     __attribute__ ((__noreturn__));
void __assert_func (const char *, int, const char *, const char *)
     __attribute__ ((__noreturn__));
# 19 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/assert.h" 2
# 11 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 2



# 1 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 209 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 321 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 415 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
} max_align_t;
# 15 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 2


# 16 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
typedef unsigned int uint;
# 31 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
typedef struct {
    uint64_t _private_us_since_boot;
} absolute_time_t;
# 42 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
static inline uint64_t to_us_since_boot(absolute_time_t t) {



    return t._private_us_since_boot;

}
# 57 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
static inline void update_us_since_boot(absolute_time_t *t, uint64_t us_since_boot) {



    
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 3
   ((
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
   us_since_boot <= 0x7fffffffffffffffLL
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h", 61, __func__, 
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
   "us_since_boot <= INT64_MAX"
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 3
   ))
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
                                     ;
    t->_private_us_since_boot = us_since_boot;

}
# 79 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h"
typedef struct {
    int16_t year;
    int8_t month;
    int8_t day;
    int8_t dotw;
    int8_t hour;
    int8_t min;
    int8_t sec;
} datetime_t;
# 17 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h" 2
# 1 "/home/work/micropython/ports/rp2/build-PICO/generated/pico_base/pico/version.h" 1
# 18 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/config.h" 1
# 19 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/config.h"
# 1 "/home/work/micropython/ports/rp2/build-PICO/generated/pico_base/pico/config_autogen.h" 1






# 1 "/home/work/micropython/lib/pico-sdk/src/boards/include/boards/pico.h" 1
# 8 "/home/work/micropython/ports/rp2/build-PICO/generated/pico_base/pico/config_autogen.h" 2



# 1 "/home/work/micropython/lib/pico-sdk/src/rp2_common/cmsis/include/cmsis/rename_exceptions.h" 1
# 11 "/home/work/micropython/ports/rp2/build-PICO/generated/pico_base/pico/config_autogen.h" 2
# 20 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/config.h" 2
# 19 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 1
# 10 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
# 1 "/usr/include/newlib/sys/cdefs.h" 1 3
# 45 "/usr/include/newlib/sys/cdefs.h" 3
# 1 "/usr/include/newlib/machine/_default_types.h" 1 3
# 41 "/usr/include/newlib/machine/_default_types.h" 3

# 41 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 46 "/usr/include/newlib/sys/cdefs.h" 2 3

# 1 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 1 3 4
# 48 "/usr/include/newlib/sys/cdefs.h" 2 3
# 11 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/types.h" 1
# 12 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/platform_defs.h" 1
# 13 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 2
# 72 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"

# 72 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
static inline void __breakpoint(void) {
    __asm__("bkpt #0");
}





# 79 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 3
__inline__ __attribute__((__always_inline__)) 
# 79 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
              static void __compiler_memory_barrier(void) {
    __asm__ volatile ("" : : : "memory");
}
# 91 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
void __attribute__((noreturn)) panic_unsupported(void);
# 100 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
void __attribute__((noreturn)) panic(const char *fmt, ...);
# 110 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"

# 110 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 3 4
_Bool 
# 110 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
    running_on_fpga(void);





uint8_t rp2040_chip_version(void);




static inline uint8_t rp2040_rom_version(void) {
    return *(uint8_t*)0x13;
}






static inline void tight_loop_contents(void) {}
# 148 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"

# 148 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h" 3
__inline__ __attribute__((__always_inline__)) 
# 148 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
              static int32_t __mul_instruction(int32_t a, int32_t b) {
    asm ("mul %0, %1" : "+l" (a) : "l" (b) : );
    return a;
}
# 175 "/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_platform/include/pico/platform.h"
uint __get_current_exception(void);
# 20 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/error.h" 1
# 13 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico/error.h"
enum {
    PICO_OK = 0,
    PICO_ERROR_NONE = 0,
    PICO_ERROR_TIMEOUT = -1,
    PICO_ERROR_GENERIC = -2,
    PICO_ERROR_NO_DATA = -3,
};
# 21 "/home/work/micropython/lib/pico-sdk/src/common/pico_base/include/pico.h" 2
# 11 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 1
# 11 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 1
# 11 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h" 1
# 10 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 1
# 11 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/addressmap.h" 1
# 12 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 2
# 58 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;
typedef volatile uint16_t io_rw_16;
typedef const volatile uint16_t io_ro_16;
typedef volatile uint16_t io_wo_16;
typedef volatile uint8_t io_rw_8;
typedef const volatile uint8_t io_ro_8;
typedef volatile uint8_t io_wo_8;

typedef volatile uint8_t *const ioptr;
typedef ioptr const const_ioptr;
# 87 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"

# 87 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 87 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_set_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x2u << 12u) | (uintptr_t)((volatile void *) addr))) = mask;
}








# 97 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 97 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_clear_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x3u << 12u) | (uintptr_t)((volatile void *) addr))) = mask;
}








# 107 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 107 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_xor_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x1u << 12u) | (uintptr_t)((volatile void *) addr))) = mask;
}
# 123 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"

# 123 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 123 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_write_masked(io_rw_32 *addr, uint32_t values, uint32_t write_mask) {
    hw_xor_bits(addr, (*addr ^ values) & write_mask);
}
# 11 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h" 2

# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/timer.h" 1
# 13 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h" 2



typedef struct {
    io_wo_32 timehw;
    io_wo_32 timelw;
    io_ro_32 timehr;
    io_ro_32 timelr;
    io_rw_32 alarm[4];
    io_rw_32 armed;
    io_ro_32 timerawh;
    io_ro_32 timerawl;
    io_rw_32 dbgpause;
    io_rw_32 pause;
    io_rw_32 intr;
    io_rw_32 inte;
    io_rw_32 intf;
    io_ro_32 ints;
} timer_hw_t;
# 12 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 2
# 53 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline void check_hardware_alarm_num_param(
# 53 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
                                                 __attribute__((__unused__)) 
# 53 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                                                          uint alarm_num) {
    ({if (((0 || 0) && !0)) 
# 54 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ((
# 54 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   !(alarm_num >= 4)
# 54 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h", 54, __func__, 
# 54 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   "!(alarm_num >= 4)"
# 54 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ))
# 54 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   ;});
}
# 65 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline uint32_t time_us_32(void) {
    return ((timer_hw_t *const)0x40054000u)->timerawl;
}
# 78 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
uint64_t time_us_64(void);






void busy_wait_us_32(uint32_t delay_us);






void busy_wait_us(uint64_t delay_us);






void busy_wait_ms(uint32_t delay_ms);






void busy_wait_until(absolute_time_t t);







static inline 
# 114 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
             _Bool 
# 114 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                  time_reached(absolute_time_t t) {
    uint64_t target = to_us_since_boot(t);
    uint32_t hi_target = (uint32_t)(target >> 32u);
    uint32_t hi = ((timer_hw_t *const)0x40054000u)->timerawh;
    return (hi >= hi_target && (((timer_hw_t *const)0x40054000u)->timerawl >= (uint32_t) target || hi != hi_target));
}







typedef void (*hardware_alarm_callback_t)(uint alarm_num);
# 137 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_claim(uint alarm_num);







void hardware_alarm_unclaim(uint alarm_num);
# 154 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 154 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool 
# 154 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
    hardware_alarm_is_claimed(uint alarm_num);
# 172 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_set_callback(uint alarm_num, hardware_alarm_callback_t callback);
# 184 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 184 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool 
# 184 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
    hardware_alarm_set_target(uint alarm_num, absolute_time_t t);
# 193 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_cancel(uint alarm_num);
# 12 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 2
# 61 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t get_absolute_time(void) {
    absolute_time_t t;
    update_us_since_boot(&t, time_us_64());
    return t;
}

static inline uint32_t us_to_ms(uint64_t us) {
    if (us >> 32u) {
        return (uint32_t)(us / 1000u);
    } else {
        return ((uint32_t)us) / 1000u;
    }
}
# 82 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline uint32_t to_ms_since_boot(absolute_time_t t) {
    uint64_t us = to_us_since_boot(t);
    return us_to_ms(us);
}
# 94 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t delayed_by_us(const absolute_time_t t, uint64_t us) {
    absolute_time_t t2;
    uint64_t base = to_us_since_boot(t);
    uint64_t delayed = base + us;
    if (delayed < base) {
        delayed = (uint64_t)-1;
    }
    update_us_since_boot(&t2, delayed);
    return t2;
}
# 112 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t delayed_by_ms(const absolute_time_t t, uint32_t ms) {
    absolute_time_t t2;
    uint64_t base = to_us_since_boot(t);
    uint64_t delayed = base + ms * 1000ull;
    if (delayed < base) {
        delayed = (uint64_t)-1;
    }
    update_us_since_boot(&t2, delayed);
    return t2;
}







static inline absolute_time_t make_timeout_time_us(uint64_t us) {
    return delayed_by_us(get_absolute_time(), us);
}







static inline absolute_time_t make_timeout_time_ms(uint32_t ms) {
    return delayed_by_ms(get_absolute_time(), ms);
}
# 154 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline int64_t absolute_time_diff_us(absolute_time_t from, absolute_time_t to) {
    return (int64_t)(to_us_since_boot(to) - to_us_since_boot(from));
}






extern const absolute_time_t at_the_end_of_time;




extern const absolute_time_t nil_time;







static inline 
# 176 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 176 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  is_nil_time(absolute_time_t t) {
    return !to_us_since_boot(t);
}
# 209 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
void sleep_until(absolute_time_t target);
# 219 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
void sleep_us(uint64_t us);
# 228 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
void sleep_ms(uint32_t ms);
# 263 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 263 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 263 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp);
# 336 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
typedef int32_t alarm_id_t;
# 347 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
typedef int64_t (*alarm_callback_t)(alarm_id_t id, void *user_data);

typedef struct alarm_pool alarm_pool_t;





void alarm_pool_init_default(void);
# 365 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
alarm_pool_t *alarm_pool_get_default(void);
# 386 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
alarm_pool_t *alarm_pool_create(uint hardware_alarm_num, uint max_timers);







uint alarm_pool_hardware_alarm_num(alarm_pool_t *pool);







void alarm_pool_destroy(alarm_pool_t *pool);
# 424 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
alarm_id_t alarm_pool_add_alarm_at(alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback, void *user_data, 
# 424 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                                        _Bool 
# 424 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                                             fire_if_past);
# 446 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t alarm_pool_add_alarm_in_us(alarm_pool_t *pool, uint64_t us, alarm_callback_t callback, void *user_data, 
# 446 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                                                _Bool 
# 446 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                                                     fire_if_past) {
    return alarm_pool_add_alarm_at(pool, delayed_by_us(get_absolute_time(), us), callback, user_data, fire_if_past);
}
# 470 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t alarm_pool_add_alarm_in_ms(alarm_pool_t *pool, uint32_t ms, alarm_callback_t callback, void *user_data, 
# 470 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                                                _Bool 
# 470 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                                                     fire_if_past) {
    return alarm_pool_add_alarm_at(pool, delayed_by_ms(get_absolute_time(), ms), callback, user_data, fire_if_past);
}
# 482 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 482 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 482 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    alarm_pool_cancel_alarm(alarm_pool_t *pool, alarm_id_t alarm_id);
# 504 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t add_alarm_at(absolute_time_t time, alarm_callback_t callback, void *user_data, 
# 504 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                       _Bool 
# 504 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                            fire_if_past) {
    return alarm_pool_add_alarm_at(alarm_pool_get_default(), time, callback, user_data, fire_if_past);
}
# 527 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t add_alarm_in_us(uint64_t us, alarm_callback_t callback, void *user_data, 
# 527 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                 _Bool 
# 527 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                      fire_if_past) {
    return alarm_pool_add_alarm_in_us(alarm_pool_get_default(), us, callback, user_data, fire_if_past);
}
# 550 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t add_alarm_in_ms(uint32_t ms, alarm_callback_t callback, void *user_data, 
# 550 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                 _Bool 
# 550 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                      fire_if_past) {
    return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(), ms, callback, user_data, fire_if_past);
}







static inline 
# 560 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 560 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  cancel_alarm(alarm_id_t alarm_id) {
    return alarm_pool_cancel_alarm(alarm_pool_get_default(), alarm_id);
}
# 576 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
typedef struct repeating_timer repeating_timer_t;







typedef 
# 584 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
       _Bool 
# 584 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
            (*repeating_timer_callback_t)(repeating_timer_t *rt);






struct repeating_timer {
    int64_t delay_us;
    alarm_pool_t *pool;
    alarm_id_t alarm_id;
    repeating_timer_callback_t callback;
    void *user_data;
};
# 617 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 617 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 617 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    alarm_pool_add_repeating_timer_us(alarm_pool_t *pool, int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out);
# 637 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline 
# 637 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 637 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  alarm_pool_add_repeating_timer_ms(alarm_pool_t *pool, int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(pool, delay_ms * (int64_t)1000, callback, user_data, out);
}
# 659 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline 
# 659 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 659 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  add_repeating_timer_us(int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_us, callback, user_data, out);
}
# 680 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline 
# 680 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 680 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  add_repeating_timer_ms(int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_ms * (int64_t)1000, callback, user_data, out);
}
# 692 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 692 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 692 "/home/work/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    cancel_repeating_timer(repeating_timer_t *timer);
# 12 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h" 1
# 11 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/spi.h" 1
# 12 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h" 2

typedef struct {
    io_rw_32 cr0;
    io_rw_32 cr1;
    io_rw_32 dr;
    io_rw_32 sr;
    io_rw_32 cpsr;
    io_rw_32 imsc;
    io_rw_32 ris;
    io_rw_32 mis;
    io_rw_32 icr;
    io_rw_32 dmacr;
} spi_hw_t;
# 13 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 2
# 47 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
typedef struct spi_inst spi_inst_t;
# 76 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
typedef enum {
    SPI_CPHA_0 = 0,
    SPI_CPHA_1 = 1
} spi_cpha_t;




typedef enum {
    SPI_CPOL_0 = 0,
    SPI_CPOL_1 = 1
} spi_cpol_t;




typedef enum {
    SPI_LSB_FIRST = 0,
    SPI_MSB_FIRST = 1
} spi_order_t;
# 112 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
uint spi_init(spi_inst_t *spi, uint baudrate);
# 121 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
void spi_deinit(spi_inst_t *spi);
# 133 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
uint spi_set_baudrate(spi_inst_t *spi, uint baudrate);
# 143 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
uint spi_get_baudrate(const spi_inst_t *spi);







static inline uint spi_get_index(const spi_inst_t *spi) {
    ({if (((0 || 0) && !0)) 
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(spi != ((spi_inst_t * const)((spi_hw_t *const)0x4003c000u)) && spi != ((spi_inst_t * const)((spi_hw_t *const)0x40040000u)))
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 152, __func__, 
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(spi != ((spi_inst_t * const)((spi_hw_t *const)0x4003c000u)) && spi != ((spi_inst_t * const)((spi_hw_t *const)0x40040000u)))"
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    return spi == ((spi_inst_t * const)((spi_hw_t *const)0x40040000u)) ? 1 : 0;
}

static inline spi_hw_t *spi_get_hw(spi_inst_t *spi) {
    spi_get_index(spi);
    return (spi_hw_t *)spi;
}

static inline const spi_hw_t *spi_get_const_hw(const spi_inst_t *spi) {
    spi_get_index(spi);
    return (const spi_hw_t *)spi;
}
# 177 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
static inline void spi_set_format(spi_inst_t *spi, uint data_bits, spi_cpol_t cpol, spi_cpha_t cpha, 
# 177 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
                                                                                                    __attribute__((__unused__)) 
# 177 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                                                                                                             spi_order_t order) {
    ({if (((0 || 0) && !0)) 
# 178 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 178 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(data_bits < 4 || data_bits > 16)
# 178 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 178, __func__, 
# 178 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(data_bits < 4 || data_bits > 16)"
# 178 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 178 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});

    ({if (((0 || 0) && !0)) 
# 180 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 180 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(order != SPI_MSB_FIRST)
# 180 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 180, __func__, 
# 180 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(order != SPI_MSB_FIRST)"
# 180 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 180 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    ({if (((0 || 0) && !0)) 
# 181 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 181 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(cpol != SPI_CPOL_0 && cpol != SPI_CPOL_1)
# 181 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 181, __func__, 
# 181 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(cpol != SPI_CPOL_0 && cpol != SPI_CPOL_1)"
# 181 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 181 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    ({if (((0 || 0) && !0)) 
# 182 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 182 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(cpha != SPI_CPHA_0 && cpha != SPI_CPHA_1)
# 182 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 182, __func__, 
# 182 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(cpha != SPI_CPHA_0 && cpha != SPI_CPHA_1)"
# 182 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 182 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    hw_write_masked(&spi_get_hw(spi)->cr0,
                    ((uint)(data_bits - 1)) << 0u |
                    ((uint)cpol) << 6u |
                    ((uint)cpha) << 7u,
        0x0000000fu |
        0x00000040u |
        0x00000080u);
}
# 201 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
static inline void spi_set_slave(spi_inst_t *spi, 
# 201 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
                                                 _Bool 
# 201 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                                                      slave) {
    if (slave)
        hw_set_bits(&spi_get_hw(spi)->cr1, 0x00000004u);
    else
        hw_clear_bits(&spi_get_hw(spi)->cr1, 0x00000004u);
}
# 217 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
static inline 
# 217 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
             _Bool 
# 217 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                  spi_is_writable(const spi_inst_t *spi) {
    return (spi_get_const_hw(spi)->sr & 0x00000002u);
}







static inline 
# 227 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
             _Bool 
# 227 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                  spi_is_readable(const spi_inst_t *spi) {
    return (spi_get_const_hw(spi)->sr & 0x00000004u);
}







static inline 
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
             _Bool 
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                  spi_is_busy(const spi_inst_t *spi) {
    return (spi_get_const_hw(spi)->sr & 0x00000010u);
}
# 253 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write_read_blocking(spi_inst_t *spi, const uint8_t *src, uint8_t *dst, size_t len);
# 266 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write_blocking(spi_inst_t *spi, const uint8_t *src, size_t len);
# 283 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_read_blocking(spi_inst_t *spi, uint8_t repeated_tx_data, uint8_t *dst, size_t len);
# 304 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write16_read16_blocking(spi_inst_t *spi, const uint16_t *src, uint16_t *dst, size_t len);
# 319 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write16_blocking(spi_inst_t *spi, const uint16_t *src, size_t len);
# 338 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_read16_blocking(spi_inst_t *spi, uint16_t repeated_tx_data, uint16_t *dst, size_t len);
# 31 "/home/work/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 1
# 12 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/sio.h" 1
# 13 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 2
# 56 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
typedef volatile uint32_t spin_lock_t;
# 112 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 112 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 112 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __sev(void) {
    __asm volatile ("sev");
}








# 122 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 122 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __wfe(void) {
    __asm volatile ("wfe");
}







# 131 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 131 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __wfi(void) {
    __asm volatile ("wfi");
}








# 141 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 141 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __dmb(void) {
    __asm volatile ("dmb" : : : "memory");
}
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 152 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __dsb(void) {
    __asm volatile ("dsb" : : : "memory");
}
# 163 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 163 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 163 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __isb(void) {
    __asm volatile ("isb");
}





# 170 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 170 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __mem_fence_acquire(void) {



    __dmb();





}






# 186 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 186 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __mem_fence_release(void) {



    __dmb();





}







# 203 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 203 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static uint32_t save_and_disable_interrupts(void) {
    uint32_t status;
    __asm volatile ("mrs %0, PRIMASK" : "=r" (status)::);
    __asm volatile ("cpsid i");
    return status;
}







# 215 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 215 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void restore_interrupts(uint32_t status) {
    __asm volatile ("msr PRIMASK,%0"::"r" (status) : );
}








# 225 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 225 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static spin_lock_t *spin_lock_instance(uint lock_num) {
    ({if (((0 || 0) && !0)) 
# 226 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   ((
# 226 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   !(lock_num >= 32u)
# 226 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h", 226, __func__, 
# 226 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   "!(lock_num >= 32u)"
# 226 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   ))
# 226 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   ;});
    return (spin_lock_t *) (0xd0000000u + 0x00000100u + lock_num * 4);
}








# 236 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 236 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static uint spin_lock_get_num(spin_lock_t *lock) {
    ({if (((0 || 0) && !0)) 
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   ((
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   !((uint) lock < 0xd0000000u + 0x00000100u || (uint) lock >= 32u * sizeof(spin_lock_t) + 0xd0000000u + 0x00000100u || ((uint) lock - 0xd0000000u + 0x00000100u) % sizeof(spin_lock_t) != 0)
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   ) ? (void)0 : __assert_func ("/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h", 237, __func__, 
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   "!((uint) lock < 0xd0000000u + 0x00000100u || (uint) lock >= 32u * sizeof(spin_lock_t) + 0xd0000000u + 0x00000100u || ((uint) lock - 0xd0000000u + 0x00000100u) % sizeof(spin_lock_t) != 0)"
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   ))
# 237 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   ;})

                                                                                                       ;
    return (uint) (lock - (spin_lock_t *) (0xd0000000u + 0x00000100u));
}







# 248 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 248 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void spin_lock_unsafe_blocking(spin_lock_t *lock) {



    while (__builtin_expect(!*lock, 0));
    __mem_fence_acquire();
}







# 261 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 261 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void spin_unlock_unsafe(spin_lock_t *lock) {
    __mem_fence_release();
    *lock = 0;
}
# 274 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 274 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 274 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static uint32_t spin_lock_blocking(spin_lock_t *lock) {
    uint32_t save = save_and_disable_interrupts();
    spin_lock_unsafe_blocking(lock);
    return save;
}






inline static 
# 285 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
             _Bool 
# 285 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
                  is_spin_locked(spin_lock_t *lock) {
    
# 286 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
   _Static_assert
# 286 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
   (sizeof(spin_lock_t) == (4), "hw size mismatch");
    uint lock_num = spin_lock_get_num(lock);
    return 0 != (*(io_ro_32 *) (0xd0000000u + 0x0000005cu) & (1u << lock_num));
}
# 302 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 302 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 302 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void spin_unlock(spin_lock_t *lock, uint32_t saved_irq) {
    spin_unlock_unsafe(lock);
    restore_interrupts(saved_irq);
}







# 312 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 312 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static uint get_core_num(void) {
    return (*(uint32_t *) (0xd0000000u + 0x00000000u));
}
# 324 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
spin_lock_t *spin_lock_init(uint lock_num);




void spin_locks_reset(void);
# 346 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
uint next_striped_spin_lock_num(void);
# 357 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
void spin_lock_claim(uint lock_num);
# 368 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
void spin_lock_claim_mask(uint32_t lock_num_mask);
# 377 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
void spin_lock_unclaim(uint lock_num);







int spin_lock_claim_unused(
# 385 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
                          _Bool 
# 385 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
                               required);
# 395 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 395 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
_Bool 
# 395 "/home/work/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
    spin_lock_is_claimed(uint lock_num);
# 32 "/home/work/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 1
# 23 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h"
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/defs.h" 1
# 24 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 2
# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 1
# 24 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
typedef struct _binary_info_core binary_info_t;
# 64 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
typedef struct 
# 64 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 64 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_core {
        uint16_t type;
        uint16_t tag;
} binary_info_core_t;

typedef struct 
# 69 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 69 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_raw_data {
        struct _binary_info_core core;
        uint8_t bytes[1];
} binary_info_raw_data_t;

typedef struct 
# 74 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 74 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_sized_data {
        struct _binary_info_core core;
        uint32_t length;
        uint8_t bytes[1];
} binary_info_sized_data_t;

typedef struct 
# 80 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 80 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_list_zero_terminated {
        struct _binary_info_core core;
        binary_info_t * list;
} binary_info_list_zero_terminated_t;

typedef struct 
# 85 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 85 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_id_and_int {
        struct _binary_info_core core;
        uint32_t id;
        int32_t value;
} binary_info_id_and_int_t;

typedef struct 
# 91 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 91 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_id_and_string {
        struct _binary_info_core core;
        uint32_t id;
        const char * value;
} binary_info_id_and_string_t;

typedef struct 
# 97 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 97 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_block_device {
        struct _binary_info_core core;
        const char * name;
        uint32_t address;
        uint32_t size;
        binary_info_t * extra;
        uint16_t flags;
} binary_info_block_device_t;




typedef struct 
# 109 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 109 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_pins_with_func {
    struct _binary_info_core core;


    uint32_t pin_encoding;
} binary_info_pins_with_func_t;

typedef struct 
# 116 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 116 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_pins_with_name {
    struct _binary_info_core core;
    uint32_t pin_mask;
    const char * label;
} binary_info_pins_with_name_t;






typedef struct 
# 127 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 127 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_named_group {
    struct _binary_info_core core;
    uint32_t parent_id;
    uint16_t flags;
    uint16_t group_tag;
    uint32_t group_id;
    const char * label;
} binary_info_named_group_t;

enum {
    BINARY_INFO_BLOCK_DEV_FLAG_READ =
    1 << 0,
    BINARY_INFO_BLOCK_DEV_FLAG_WRITE = 1 << 1,
    BINARY_INFO_BLOCK_DEV_FLAG_REFORMAT = 1 << 2,

    BINARY_INFO_BLOCK_DEV_FLAG_PT_UNKNOWN = 0 << 4,
    BINARY_INFO_BLOCK_DEV_FLAG_PT_MBR = 1 << 4,
    BINARY_INFO_BLOCK_DEV_FLAG_PT_GPT = 2 << 4,
    BINARY_INFO_BLOCK_DEV_FLAG_PT_NONE = 3 << 4,
};
# 25 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 2




# 1 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/code.h" 1
# 30 "/home/work/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 2
# 33 "/home/work/micropython/ports/rp2/mpconfigport.h" 2

# 1 "/home/work/micropython/ports/rp2/boards/PICO/mpconfigboard.h" 1
# 35 "/home/work/micropython/ports/rp2/mpconfigport.h" 2
# 180 "/home/work/micropython/ports/rp2/mpconfigport.h"
extern const struct _mp_obj_module_t mp_module_machine;
extern const struct _mp_obj_module_t mp_module_network;
extern const struct _mp_obj_module_t mp_module_onewire;
extern const struct _mp_obj_module_t mp_module_rp2;
extern const struct _mp_obj_module_t mp_module_uos;
extern const struct _mp_obj_module_t mp_module_usocket;
extern const struct _mp_obj_module_t mp_module_utime;
# 221 "/home/work/micropython/ports/rp2/mpconfigport.h"
extern const struct _mp_obj_type_t mod_network_nic_type_wiznet5k;
# 319 "/home/work/micropython/ports/rp2/mpconfigport.h"
typedef intptr_t mp_int_t;
typedef uintptr_t mp_uint_t;
typedef intptr_t mp_off_t;


# 1 "/usr/include/newlib/alloca.h" 1 3
# 11 "/usr/include/newlib/alloca.h" 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 1 3 4
# 15 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 24 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 1 3 4
# 350 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4

# 350 "/usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/usr/include/newlib/sys/_types.h" 2 3


# 1 "/usr/include/newlib/machine/_types.h" 1 3
# 28 "/usr/include/newlib/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/usr/include/newlib/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/usr/include/newlib/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/usr/include/newlib/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 34 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3
# 11 "/usr/include/newlib/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 35 "/usr/include/newlib/sys/reent.h" 2 3
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 122 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 186 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 324 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 613 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 819 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/include/newlib/alloca.h" 2 3
# 325 "/home/work/micropython/ports/rp2/mpconfigport.h" 2






# 330 "/home/work/micropython/ports/rp2/mpconfigport.h"
extern uint32_t rosc_random_u32(void);
# 63 "/home/work/micropython/py/mpconfig.h" 2
# 764 "/home/work/micropython/py/mpconfig.h"
typedef float mp_float_t;
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (1))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)






Q(/lib)
Q(ADC)

Q(ADC)

Q(AF_INET)

Q(AF_INET6)

Q(ALT)

Q(ALT)

Q(ARRAY)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BFINT16)

Q(BFINT32)

Q(BFINT8)

Q(BFUINT16)

Q(BFUINT32)

Q(BFUINT8)

Q(BF_LEN)

Q(BF_POS)

Q(BIG_ENDIAN)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BytesIO)

Q(BytesIO)

Q(CORE_TEMP)

Q(CTS)

Q(CancelledError)

Q(DecompIO)

Q(DecompIO)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FLOAT32)

Q(FLOAT64)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(Flash)

Q(FrameBuffer)

Q(FrameBuffer)

Q(FrameBuffer1)

Q(GS2_HMSB)

Q(GS4_HMSB)

Q(GS8)

Q(GeneratorExit)

Q(GeneratorExit)

Q(I2C)

Q(I2C)

Q(IN)

Q(IN)

Q(INT)

Q(INT16)

Q(INT32)

Q(INT64)

Q(INT8)

Q(INV_RX)

Q(INV_TX)

Q(IN_HIGH)

Q(IN_LOW)

Q(IOBase)

Q(IOBase)

Q(IPPROTO_IP)

Q(IP_ADD_MEMBERSHIP)

Q(IRQ_FALLING)

Q(IRQ_RISING)

Q(IRQ_SM0)

Q(IRQ_SM1)

Q(IRQ_SM2)

Q(IRQ_SM3)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(JOIN_NONE)

Q(JOIN_RX)

Q(JOIN_TX)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LITTLE_ENDIAN)

Q(LONG)

Q(LONGLONG)

Q(LSB)

Q(LookupError)

Q(LookupError)

Q(MONO_HLSB)

Q(MONO_HMSB)

Q(MONO_VLSB)

Q(MSB)

Q(MVLSB)

Q(MemoryError)

Q(MemoryError)

Q(NATIVE)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ONE_SHOT)

Q(ONE_SHOT)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUT)

Q(OUT)

Q(OUT_HIGH)

Q(OUT_LOW)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PERIODIC)

Q(PERIODIC)

Q(PIO)

Q(PIO)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(PTR)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_UP)

Q(PULL_UP)

Q(PWM)

Q(PWM)

Q(PWRON_RESET)

Q(Pin)

Q(Pin)

Q(RGB565)

Q(RTC)

Q(RTC)

Q(RTS)

Q(RuntimeError)

Q(RuntimeError)

Q(SHIFT_LEFT)

Q(SHIFT_RIGHT)

Q(SHORT)

Q(SOCK_DGRAM)

Q(SOCK_STREAM)

Q(SOL_SOCKET)

Q(SO_REUSEADDR)

Q(SPI)

Q(SPI)

Q(SPI)

Q(Signal)

Q(Signal)

Q(SoftI2C)

Q(SoftI2C)

Q(SoftSPI)

Q(SoftSPI)

Q(StateMachine)

Q(StateMachine)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(Task)

Q(Task)

Q(TaskQueue)

Q(TaskQueue)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(Timer)

Q(Timer)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UINT)

Q(UINT16)

Q(UINT32)

Q(UINT64)

Q(UINT8)

Q(ULONG)

Q(ULONGLONG)

Q(USHORT)

Q(UnicodeError)

Q(UnicodeError)

Q(VOID)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(VfsLfs2)

Q(VfsLfs2)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WDT)

Q(WDT)

Q(WDT_RESET)

Q(WIZNET5K)

Q(WIZNET5K)

Q(WIZNET5K)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__floordiv__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__globals__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__radd__)

Q(__rand__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rfloordiv__)

Q(__rlshift__)

Q(__rmatmul__)

Q(__rmod__)

Q(__rmul__)

Q(__ror__)

Q(__rpow__)

Q(__rrshift__)

Q(__rshift__)

Q(__rsub__)

Q(__rtruediv__)

Q(__rxor__)

Q(__set__)

Q(__set__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__truediv__)

Q(__xor__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_string_gt_)

Q(_onewire)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_rp2)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(_task_queue)

Q(_uasyncio)

Q(_uasyncio)

Q(a2b_base64)

Q(abs)

Q(abs_tol)

Q(accept)

Q(acos)

Q(acosh)

Q(active)

Q(active)

Q(add)

Q(add)

Q(add)

Q(add_program)

Q(addr)

Q(addressof)

Q(addrsize)

Q(align)

Q(all)

Q(alloc_emergency_exception_buf)

Q(alt)

Q(and_)

Q(any)

Q(any)

Q(append)

Q(append)

Q(append)

Q(arg)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(asin)

Q(asinh)

Q(asm_pio_encode)

Q(asm_thumb)

Q(asr)

Q(atan)

Q(atan2)

Q(atanh)

Q(b)

Q(b2a_base64)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(bind)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bl)

Q(blit)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bootloader)

Q(bound_method)

Q(buffer)

Q(buffering)

Q(builtins)

Q(builtins)

Q(bx)

Q(bytearray)

Q(bytearray)

Q(bytearray_at)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_at)

Q(calcsize)

Q(callable)

Q(callback)

Q(callback)

Q(cancel)

Q(ceil)

Q(center)

Q(center)

Q(cert)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(clz)

Q(cmath)

Q(cmath)

Q(cmp)

Q(code)

Q(collect)

Q(compile)

Q(compile)

Q(complex)

Q(complex)

Q(config)

Q(connect)

Q(const)

Q(const)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(coro)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(cpsid)

Q(cpsie)

Q(crc32)

Q(crc8)

Q(cts)

Q(cur_task)

Q(cur_task)

Q(data)

Q(data)

Q(data)

Q(datetime)

Q(decode)

Q(decode)

Q(decompress)

Q(deepsleep)

Q(default)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(deleter)

Q(deque)

Q(deque)

Q(dhcp)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(dir)

Q(disable)

Q(disable_irq)

Q(discard)

Q(divmod)

Q(do_handshake)

Q(doc)

Q(done)

Q(dump)

Q(dumps)

Q(duty_ns)

Q(duty_u16)

Q(e)

Q(e)

Q(enable)

Q(enable_irq)

Q(encode)

Q(encoding)

Q(encoding)

Q(end)

Q(end)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(erf)

Q(erfc)

Q(errno)

Q(errorcode)

Q(eval)

Q(eval)

Q(exec)

Q(exec)

Q(exec)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(extend)

Q(extend)

Q(extfunc)

Q(fabs)

Q(factorial)

Q(feed)

Q(file)

Q(file)

Q(file)

Q(fill)

Q(fill_rect)

Q(filter)

Q(filter)

Q(find)

Q(find)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(flags)

Q(float)

Q(float)

Q(floor)

Q(flow)

Q(flush)

Q(flush)

Q(flush)

Q(fmod)

Q(format)

Q(format)

Q(framebuf)

Q(framebuf)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gamma)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get)

Q(getaddrinfo)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getpeercert)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(globals)

Q(gmtime)

Q(group)

Q(groups)

Q(handler)

Q(handler)

Q(handler)

Q(handler)

Q(hard)

Q(hard)

Q(hard)

Q(hard)

Q(hasattr)

Q(hash)

Q(heap_lock)

Q(heap_unlock)

Q(heapify)

Q(heappop)

Q(heappush)

Q(help)

Q(hex)

Q(hexlify)

Q(high)

Q(hline)

Q(id)

Q(id)

Q(id)

Q(id)

Q(id)

Q(idle)

Q(ifconfig)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(implementation)

Q(in_base)

Q(in_shiftdir)

Q(index)

Q(index)

Q(index)

Q(index)

Q(indices)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(invert)

Q(invert)

Q(invert)

Q(ioctl)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(isalpha)

Q(isalpha)

Q(isclose)

Q(isconnected)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(jmp_pin)

Q(join)

Q(join)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(label)

Q(ldexp)

Q(ldr)

Q(ldrb)

Q(ldrh)

Q(len)

Q(lgamma)

Q(lightsleep)

Q(line)

Q(list)

Q(list)

Q(listdir)

Q(listen)

Q(little)

Q(little)

Q(little)

Q(little)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(log)

Q(log)

Q(log10)

Q(log10)

Q(log2)

Q(lookahead)

Q(low)

Q(lower)

Q(lower)

Q(lsl)

Q(lsr)

Q(lstrip)

Q(lstrip)

Q(lwip)

Q(lwip)

Q(mac)

Q(mac)

Q(machine)

Q(machine)

Q(makefile)

Q(map)

Q(map)

Q(match)

Q(match)

Q(match)

Q(math)

Q(math)

Q(max)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(mem)

Q(mem16)

Q(mem32)

Q(mem8)

Q(mem_alloc)

Q(mem_free)

Q(mem_info)

Q(memaddr)

Q(memoryview)

Q(memoryview)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(miso)

Q(miso)

Q(miso)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mov)

Q(mov)

Q(mpy)

Q(mrs)

Q(mtime)

Q(name)

Q(namedtuple)

Q(native)

Q(network)

Q(network)

Q(next)

Q(nodename)

Q(nop)

Q(object)

Q(object)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(off)

Q(off)

Q(on)

Q(on)

Q(onewire)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(opt_level)

Q(ord)

Q(out_base)

Q(out_shiftdir)

Q(pack)

Q(pack_into)

Q(parity)

Q(partition)

Q(partition)

Q(path)

Q(peek)

Q(pend_throw)

Q(period)

Q(ph_key)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(pi)

Q(pi)

Q(pixel)

Q(platform)

Q(polar)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop_head)

Q(popitem)

Q(popleft)

Q(pow)

Q(pow)

Q(print)

Q(print_exception)

Q(print_pcbs)

Q(prog)

Q(progsize)

Q(property)

Q(property)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(pull)

Q(pull_thresh)

Q(push)

Q(push_head)

Q(push_sorted)

Q(push_thresh)

Q(put)

Q(qstr_info)

Q(r)

Q(r)

Q(radians)

Q(randint)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(rb)

Q(rbit)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_u16)

Q(readbit)

Q(readblocks)

Q(readblocks)

Q(readbyte)

Q(readfrom)

Q(readfrom_into)

Q(readfrom_mem)

Q(readfrom_mem_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readlines)

Q(readonly)

Q(readsize)

Q(real)

Q(rect)

Q(rect)

Q(recv)

Q(recvfrom)

Q(register)

Q(regs)

Q(rel_tol)

Q(release)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove_program)

Q(rename)

Q(rename)

Q(rename)

Q(rename)

Q(replace)

Q(replace)

Q(repr)

Q(reset)

Q(reset)

Q(reset)

Q(reset_cause)

Q(restart)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(round)

Q(route)

Q(rp2)

Q(rp2)

Q(rpartition)

Q(rpartition)

Q(rsplit)

Q(rsplit)

Q(rstrip)

Q(rstrip)

Q(rts)

Q(rx)

Q(rx_fifo)

Q(rxbuf)

Q(scan)

Q(schedule)

Q(sck)

Q(sck)

Q(sck)

Q(scl)

Q(scl)

Q(scroll)

Q(sda)

Q(sda)

Q(sdiv)

Q(search)

Q(search)

Q(seed)

Q(seek)

Q(seek)

Q(seek)

Q(select)

Q(send)

Q(send)

Q(send)

Q(send_ethernet)

Q(sendall)

Q(sendbreak)

Q(sendto)

Q(sep)

Q(separators)

Q(server_hostname)

Q(server_side)

Q(set)

Q(set)

Q(set_base)

Q(setattr)

Q(setblocking)

Q(setblocking)

Q(setblocking)

Q(setdefault)

Q(setsockopt)

Q(setter)

Q(settimeout)

Q(sha256)

Q(sha256)

Q(sideset_base)

Q(sin)

Q(sin)

Q(single)

Q(sinh)

Q(sizeof)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(socket)

Q(socket)

Q(soft_reset)

Q(sort)

Q(sorted)

Q(span)

Q(split)

Q(split)

Q(split)

Q(splitlines)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(stack_use)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(startswith)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(state)

Q(state)

Q(state_machine)

Q(staticmethod)

Q(staticmethod)

Q(status)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(strb)

Q(strex)

Q(strh)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(sub)

Q(sub)

Q(sub)

Q(sub)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sys)

Q(sysname)

Q(tan)

Q(tanh)

Q(tell)

Q(tell)

Q(tell)

Q(text)

Q(threshold)

Q(throw)

Q(throw)

Q(tick_hz)

Q(ticks_add)

Q(ticks_cpu)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(time)

Q(time_ns)

Q(time_pulse_us)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout_char)

Q(to_bytes)

Q(toggle)

Q(trace)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trunc)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tx)

Q(tx_fifo)

Q(txbuf)

Q(type)

Q(type)

Q(uarray)

Q(uarray)

Q(ubinascii)

Q(ubinascii)

Q(ucollections)

Q(ucollections)

Q(uctypes)

Q(uctypes)

Q(udiv)

Q(uerrno)

Q(uerrno)

Q(uhashlib)

Q(uhashlib)

Q(uheapq)

Q(uheapq)

Q(uint)

Q(uint)

Q(uint)

Q(uio)

Q(uio)

Q(ujson)

Q(ujson)

Q(umachine)

Q(umount)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(union)

Q(union)

Q(unique_id)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(uos)

Q(uos)

Q(update)

Q(update)

Q(update)

Q(upper)

Q(upper)

Q(urandom)

Q(urandom)

Q(urandom)

Q(ure)

Q(ure)

Q(ure)

Q(uselect)

Q(uselect)

Q(usocket)

Q(ussl)

Q(ussl)

Q(ussl)

Q(ustruct)

Q(ustruct)

Q(usys)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(utime)

Q(utime)

Q(uzlib)

Q(uzlib)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(viper)

Q(vline)

Q(wfi)

Q(wrap_socket)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_readinto)

Q(writebit)

Q(writeblocks)

Q(writeblocks)

Q(writebyte)

Q(writeto)

Q(writeto_mem)

Q(writevto)

Q(zip)

Q(zip)
