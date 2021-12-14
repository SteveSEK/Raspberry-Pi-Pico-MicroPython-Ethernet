upip example
======================================

This example demonstrates implementing **[upip](https://docs.micropython.org/en/latest/reference/packages.html#upip-package-manager)** for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[here](documents/init_network.md)**. 

## check lib folder
```
>>> import os
>>> os.listdir('/')
[]
>>> 
```
## upip install
```
>>> import upip
>>> upip.install("micropython-pystone_lowmem")
Installing to: /lib/
Queue: ['micropython-pystone_lowmem']
https://micropython.org/pi/micropython-pystone_lowmem/json
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
Warning: micropython.org SSL certificate is not validated
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Tue, 14 Dec 2021 07:57:27 GMT
   Content-Type: application/octet-stream
   Content-Length: 155
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-9b"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Installing micropython-pystone_lowmem 3.4.2.post4 from https://micropython.org/pi/pystone_lowmem/pystone_lowmem-3.4.2.post4.tar.gz
https://micropython.org/pi/pystone_lowmem/pystone_lowmem-3.4.2.post4.tar.gz
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Tue, 14 Dec 2021 07:57:32 GMT
   Content-Type: application/octet-stream
   Content-Length: 3218
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-c92"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Extracting /lib/pystone_lowmem.py
Skipping micropython_pystone_lowmem.egg-info/PKG-INFO
{}
>>> 
```
## check lib folder
```
>>> 
>>> os.listdir('/')
['lib']
>>> os.listdir('/lib')
['pystone_lowmem.py']
>>> 
```

## launch installed package
```
>>> 
>>> import pystone_lowmem
>>> pystone_lowmem.main()
Pystone(1.2) time for 500 passes = 460ms
This machine benchmarks at 1086 pystones/second
>>> 
>>> 
```

## Screenshot
![image](https://user-images.githubusercontent.com/2126804/145956906-a396747d-1c08-4a6e-b83e-59a16b187853.png)


