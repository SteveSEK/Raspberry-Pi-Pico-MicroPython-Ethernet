TCP/UDP example
======================================

This example demonstrates implementing TCP/UDP communication for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[here](documents/init_network.md)**. 


## TCP Client
```
>>>
>>> import socket
>>> s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
>>> s.connect(('192.168.10.106', 900))
>>> s.send('Hello MP')
8
>>> print(s.read(8))
b'Hello MP'
>>> s.close()
>>> 
```

![image](https://user-images.githubusercontent.com/2126804/145928132-95a69a70-f785-468c-b205-fc9468b49c4b.png)

## UDP
```
>>> 
>>> import socket
>>> s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
>>> s.connect(('192.168.10.106', 9000))
>>> s.send('Hello MP')
8
>>> s.close()
>>> 
```
![image](https://user-images.githubusercontent.com/2126804/145950554-e6dde40e-681f-40d9-9fd4-568c6be39149.png)
