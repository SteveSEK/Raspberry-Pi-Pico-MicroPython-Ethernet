Raspberry Pi Pico MicroPython Ethernet
======================================

## Overview
This is the MicroPython project, which aims to put an implementation of micropython, WIZnet ethernet chip and raspberry pi pico(RP2040).
And, there are some micoropython examples using it. 

![image](https://user-images.githubusercontent.com/2126804/146094650-630c79a5-e1f0-4f33-bb8f-03ffea796844.png)

## Quick Start Firmware
* You can start this quickly with these compiled files.
  - **[Micropython firmware for RP2040(with axtls) (732KB)](ports/rp2/documents/fw/firmware_axtls.uf2)**
  - **[Micropython firmware for RP2040(with mbedTLS) (850KB)](ports/rp2/documents/fw/firmware_mbedtls.uf2)**

## Quick Start YouTube 
[![Video Label](https://user-images.githubusercontent.com/2126804/150751997-f318b8f5-8442-426e-b0b2-fb54dc83bd6f.png)](https://youtu.be/6RJRbAHxu5Y?t=0s)

  
## Main Features (components) based on on **[Micropython](https://github.com/micropython/micropython)**
* **[RP2040 SDK](https://www.raspberrypi.com/products/rp2040)**
* **[WIZnet W5100S](https://www.wiznet.io/ko/product-item/w5100s)** (Ethernet Chip MacRaw mode)  (or W5500)
* **[lwIP](https://github.com/lwip-tcpip/lwip)**
* **[AXTLS](https://github.com/micropython/axtls/tree/531cab9c278c947d268bd4c94ecab9153a961b43)**
* **[mbedTLS](https://github.com/ARMmbed/mbedtls/tree/1bc2c9cb8b8fe4659bd94b8ebba5a4c02029b7fa)**
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
..............................................................................
..............................................................................
[ 99%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/tinyusb/src/class/vendor/vendor_device.c.obj
[ 99%] Building C object CMakeFiles/firmware.dir/home/work/micropython/lib/pico-sdk/src/rp2_common/pico_fix/rp2040_usb_device_enumeration/rp2040_usb_device_enumeration.c.obj
[100%] Linking CXX executable firmware.elf
   text    data     bss     dec     hex filename
 433796      92  164496  598384   92170 /home/work/micropython/ports/rp2/build-PICO/firmware.elf
[100%] Built target firmware
```

# Raspberry Pi Pico & MicroPython example

I'm testing the examples below with this Raspberry Pi Pico MicroPython Ethernet projects.

* **[Initialize Network & Ping](ports/rp2/documents/init_network.md)**
* **[TCP/UDP Client](ports/rp2/documents/example_tcpudp.md)**
* **[TLS Client (with OpenSSL)](ports/rp2/documents/example_mbedtls.md)**
* **[MQTT Client (umqtt package)](ports/rp2/documents/example_mqtt.md)**
* **[HTTP(S) Client (urequest package)](ports/rp2/documents/example_urequest.md)**
* **[Azure IoT Hub Client example](ports/rp2/documents/example_azureiothub.md)**
* **[AWS IoT Core Client example](ports/rp2/documents/example_awsiot.md)**
* **[upip install (MicroPython packages)](ports/rp2/documents/example_upip.md)**

# Notice
It needs more memory optimization and exception handling implementation.  

