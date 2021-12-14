TLS example
======================================

This example demonstrates implementing TLS communication for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[Init Network](documents/init_network.md)**.

## TLS Client
```
>>> 
>>> import socket
>>> import ssl
>>> s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
>>> s.connect(('192.168.10.106', 9000))
>>> ss = ssl.wrap_socket(s)
>>> ss.write('Hello MP')
8
>>> 
```

![image](https://user-images.githubusercontent.com/2126804/145954475-3d9dc402-8686-4a71-9df1-559c0b5ff059.png)

