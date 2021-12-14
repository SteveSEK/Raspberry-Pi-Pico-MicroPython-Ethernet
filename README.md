XXXXXXXXXX Raspberry Pi Pico MicroPython Ethernet
======================================

## Overview
This is the MicroPython project, which aims to put an implementation of micropython, WIZnet ethernet chip and raspberry pi pico(RP2040).
And, there are some micoropython examples using it. 

## Major Features (components) based on on **[Micropython](https://github.com/micropython/micropython)**
* **[RP2040 SDK](https://www.raspberrypi.com/products/rp2040)**
* **[WIZnet W5100S](https://www.wiznet.io/ko/product-item/w5100s)** (Ethernet Chip MacRaw mode)  (W5500 가능)
* **[lwIP](https://github.com/lwip-tcpip/lwip)**
* **[mbedTLS](https://github.com/ARMmbed/mbedtls)**
* **[upip](https://docs.micropython.org/en/latest/reference/packages.html#upip-package-manager)**
 
# Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

![image](https://user-images.githubusercontent.com/2126804/145735128-98105336-dbeb-4fda-b5e8-89aff0156b8e.png)
![image](https://user-images.githubusercontent.com/2126804/145735202-f973c939-d1a7-47dc-90d7-1b3176fc21cc.png)

# S/W Development Environment (Build Log)
* Windows 10, WSL
```
PS D:\> wsl -l -o
NAME            FRIENDLY NAME
Ubuntu          Ubuntu
Debian          Debian GNU/Linux
kali-linux      Kali Linux Rolling
openSUSE-42     openSUSE Leap 42
SLES-12         SUSE Linux Enterprise Server v12
Ubuntu-16.04    Ubuntu 16.04 LTS
Ubuntu-18.04    Ubuntu 18.04 LTS
Ubuntu-20.04    Ubuntu 20.04 LTS
```
```
root@LAPTOP-XXXXXX:/home/work/micropython# python --version
Python 3.8.5
```
* Build Log
```
root@LAPTOP-N9I1JU3D:/home/work/micropython/ports/rp2# make
[ -d build-PICO ] || cmake -S . -B build-PICO -DPICO_BUILD_DOCS=0 -DMICROPY_BOARD=PICO -DMICROPY_PY_WIZNET5K=5105 -DMICROPY_PY_LWIP=1
make -s -C build-PICO
[  0%] Performing build step for 'ELF2UF2Build'
[100%] Built target elf2uf2
[  0%] No install step for 'ELF2UF2Build'
[  0%] Completed 'ELF2UF2Build'
[  1%] Built target ELF2UF2Build
[  2%] Built target bs2_default
[  3%] Built target bs2_default_padded_checksummed_asm
[  3%] Generating genhdr/mpversion.h
[  3%] Generating genhdr/moduledefs.h
[  4%] Generating genhdr/qstr.i.last
[  4%] Generating genhdr/qstr.split
[  4%] Generating genhdr/qstrdefs.collected.h
QSTR not updated
[  4%] Generating frozen_content.c
Scanning dependencies of target firmware
[  4%] Generating genhdr/mpversion.h
[  4%] Generating genhdr/qstrdefs.collected.h
QSTR not updated
[  4%] Building C object CMakeFiles/firmware.dir/home/work/micropython/py/objmodule.c.obj
[  4%] Building C object CMakeFiles/firmware.dir/home/work/micropython/extmod/moduzlib.c.obj
..............................................................................
..............................................................................
[ 97%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/dfu/dfu_device.c.obj
[ 98%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/dfu/dfu_rt_device.c.obj
[ 98%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/hid/hid_device.c.obj
[ 98%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/midi/midi_device.c.obj
[ 98%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/msc/msc_device.c.obj
[ 99%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/net/net_device.c.obj
[ 99%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/usbtmc/usbtmc_device.c.obj
[ 99%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/vendor/vendor_device.c.obj
[ 99%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/rp2040_usb_device_enumeration.c.obj
[100%] Linking CXX executable firmware.elf
   text    data     bss     dec     hex filename
 433796      92  164496  598384   92170 /home/work/micropython/ports/rp2/build-PICO/firmware.elf
[100%] Built target firmware
```


# S/W Major Components

# Micropython Example

# License






https://docs.wiznet.io/Product/iEthernet/W5100S/w5100s-evb-pico


Software development environment (Build Log)
Windows 10 WSL 
빌드 로그
바이너리, memory map?



예제 
   Quick Start (USB 복)
   TCP/UDP
   ureqest
   mbedtls
   upip 분석   
   mqtt
   extfunc
   
License


------------
예) TCP/UDP
HW 구성 
로그


