# umqtt example

This demonstrates an umqtt package example for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[Init Network](documents/init_network.md)**.

## install umqtt
```
>>> 
>>> import upip
>>> upip.install("micropython-umqtt.simple")
Installing to: /lib/
Queue: ['micropython-umqtt.simple']
https://micropython.org/pi/micropython-umqtt.simple/json
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Wed, 15 Dec 2021 01:25:35 GMT
   Content-Type: application/octet-stream
   Content-Length: 133
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-85"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Installing micropython-umqtt.simple 1.3.4 from https://micropython.org/pi/umqtt.simple/umqtt.simple-1.3.4.tar.gz
https://micropython.org/pi/umqtt.simple/umqtt.simple-1.3.4.tar.gz
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Wed, 15 Dec 2021 01:25:40 GMT
   Content-Type: application/octet-stream
   Content-Length: 4049
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-fd1"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Skipping micropython_umqtt.simple.egg-info/PKG-INFO
Extracting /lib/umqtt/simple.py
{}
>>> import os
>>> os.listdir('/lib')
['pystone_lowmem.py', 'umqtt', 'urequests.py']
>>> 
```

## MQTT Broker for est
**[HiveMQ](https://www.hivemq.com/public-mqtt-broker/)** MQTT broker is open for anyone to use, so **[HiveMQ](https://www.hivemq.com/public-mqtt-broker/)** will be used for testing. 
* Broker: broker.hivemq.com
* TCP Port: 1883
* Websocket Port: 8000

## HiveMQ Publish example (MQTT)
```
>>> 
>>> from umqtt.simple import MQTTClient
>>> client = MQTTClient('clientId-test', 'broker.hivemq.com')
>>> client.connect()
0
>>> client.publish('sensor/1', 'Temp = 20')
>>> client.publish('sensor/1', 'Temp = 30')
>>> client.publish('sensor/1', 'Temp = 40')
>>> 
```

## HiveMQ Subscribe example (MQTT)
```
>>> 
>>> def my_callback(topic, msg):
...     print('MQTT Recv : Topic({}), msg({})'.format(topic.decode(), msg.decode()))
...     
...     
... 
>>> client.set_callback(my_callback)
>>> client.subscribe('event/1')
>>> client.check_msg()
MQTT Recv : Topic(event/1), msg(LED On)
>>> client.check_msg()
MQTT Recv : Topic(event/1), msg(LED On)
>>> client.check_msg()
MQTT Recv : Topic(event/1), msg(LED Off)
>>> 
```

![image](https://user-images.githubusercontent.com/2126804/146122099-863b2701-c070-4574-9024-760b62da28dc.png)


## Memory allocation problem
In this project, micropython, lwip and mbedTLS are all involved, so memory may be insufficient on a web page with a lot of data.
![image](https://user-images.githubusercontent.com/2126804/146104583-34673623-005b-4b4a-8cb1-d1d8653b0fcf.png)
