AWS IoT Core(MQTTS) example
======================================

This example demonstrates implementing AWS IoT Core device for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[Init Network](documents/init_network.md)**.


## upip install micropython-umqtt.robust
### micropython-umqtt.robust
umqtt is a simple MQTT client for MicroPython. (Note that it uses some MicroPython shortcuts and doesn’t work with CPython). It consists of two submodules: umqtt.simple and umqtt.robust. umqtt.robust is built on top of umqtt.simple and adds auto-reconnect facilities for some of networking errors.

```
>>> 
>>> import upip
>>> upip.install("micropython-umqtt.robust")
Installing to: /lib/
Queue: ['micropython-umqtt.robust']
https://micropython.org/pi/micropython-umqtt.robust/json
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
Warning: micropython.org SSL certificate is not validated
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Wed, 22 Dec 2021 00:42:34 GMT
   Content-Type: application/octet-stream
   Content-Length: 133
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-85"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Installing micropython-umqtt.robust 1.0.1 from https://micropython.org/pi/umqtt.robust/umqtt.robust-1.0.1.tar.gz
https://micropython.org/pi/umqtt.robust/umqtt.robust-1.0.1.tar.gz
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Wed, 22 Dec 2021 00:42:40 GMT
   Content-Type: application/octet-stream
   Content-Length: 3271
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-cc7"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Skipping micropython_umqtt.robust.egg-info/PKG-INFO
Extracting /lib/umqtt/robust.py
{}
>>> 
```

## AWS IoT client certificates
I converted certificate files which I received AWS-IoT-administrator to der format files and uploaded them to the W5100S-EVB-Pico, as below
And, 
```
D:\Work\openssl>openssl x509 -in cert.pem -outform DER -out cert.der
WARNING: can't open config file: /usr/local/ssl/openssl.cnf

D:\Work\openssl>openssl rsa -in key.pem -outform DER -out key.der
WARNING: can't open config file: /usr/local/ssl/openssl.cnf
writing RSA key
```
![image](https://user-images.githubusercontent.com/2126804/147186816-a9a9a754-4c35-4913-8e6f-753706226e99.png)


## Azure IoT Hub Deivce python code

```
import utime
import json
from umqtt.robust import MQTTClient

CERT_FILE = "/cert.der"
KEY_FILE = "/key.der"
MQTT_CLIENT_ID = "my_rp2040_thing"
MQTT_PORT = 8883
MQTT_TOPIC = "$aws/things/my_rp2040_thing/shadow/update"

MQTT_HOST = "aqzlxxxxxxx-ats.iot.ap-northeast-2.amazonaws.com"
mqtt_client = None

def pub_msg(msg):
    global mqtt_client
    try:    
        mqtt_client.publish(MQTT_TOPIC, msg)
        print("Sent: " + msg)
    except Exception as e:
        print("Exception publish: " + str(e))
        raise
    
def connect_mqtt():    
    global mqtt_client

    try:
        with open(KEY_FILE, "r") as f: 
            key = f.read()
        print("Got Key")
            
        with open(CERT_FILE, "r") as f: 
            cert = f.read()
        print("Got Cert")

        mqtt_client = MQTTClient(client_id=MQTT_CLIENT_ID, server=MQTT_HOST, port=MQTT_PORT, keepalive=5000, ssl=True, ssl_params={"cert":cert, "key":key, "server_side":False})
        mqtt_client.connect()
        print('MQTT Connected')

        ## Send telemetry
        for i in range(0, 10):            
            msg = json.dumps({"level": i})
            pub_msg(msg)
            utime.sleep(2)

        mqtt_client.disconnect()
        
    except Exception as e:
        print('MQTT Exception : ' + str(e))
        raise


if __name__ == "__main__":
    connect_mqtt()
```
![image](https://user-images.githubusercontent.com/2126804/147185964-a47821b3-382b-4042-8d57-031ed03a3802.png)


