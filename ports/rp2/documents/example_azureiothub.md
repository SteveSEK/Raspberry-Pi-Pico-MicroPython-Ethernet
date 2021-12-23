Azure IoT Hub(MQTTS) example
======================================

This example demonstrates implementing Azure IoT Hub device for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


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

## SAS Token String
To get SAS Token string in python code, I used the **[Azure IoT explorer](https://github.com/Azure/azure-iot-explorer)** utility.
![image](https://user-images.githubusercontent.com/2126804/147017548-91183289-8e9b-4e21-9db7-5d74957ae91c.png)

## Azure IoT Hub Deivce python code
```
import utime
from umqtt.robust import MQTTClient
import json

def create_mqtt_client(client_id, hostname, username, password, port=8883, keepalive=120, ssl=True):
    if not keepalive:
        keepalive = 120
    if not ssl:
        ssl = True
    c = MQTTClient(client_id=client_id, server=hostname, port=8883, user=username, password=password, keepalive=120, ssl=True)
    c.DEBUG = True
    return c

def get_telemetry_topic(device_id):
    return get_topic_base(device_id) + "/messages/events/"
    
def get_c2d_topic(device_id):
     return get_topic_base(device_id) + "/messages/devicebound/#"

def get_topic_base(device_id, module_id=None):
    if module_id:
        base_str = "devices/" + device_id + "/modules/" + module_id
    else:
        base_str = "devices/" + device_id
    return base_str

DELIMITER = ";"
VALUE_SEPARATOR = "="

def parse_connection(connection_string):
    cs_args = connection_string.split(DELIMITER)
    dictionary = dict(arg.split(VALUE_SEPARATOR, 1) for arg in cs_args)
    return dictionary

def callback_handler(topic, message_receive):
    print("Received message")
    print(message_receive)

def demo():
    HOST_NAME = "HostName"
    SHARED_ACCESS_KEY_NAME = "SharedAccessKeyName"
    SHARED_ACCESS_KEY = "SharedAccessKey"
    SHARED_ACCESS_SIGNATURE = "SharedAccessSignature"
    DEVICE_ID = "DeviceId"
    MODULE_ID = "ModuleId"
    GATEWAY_HOST_NAME = "GatewayHostName"
    
    ## Parse the connection string into constituent parts
    dict_keys = parse_connection("HostName=asghub.azure-devices.net;DeviceId=testdevice;SharedAccessKey=NSLilzg9IGx0dPeFrnbO6Qo8tscXXXXXXXXXXXX")
        
    shared_access_key = dict_keys.get(SHARED_ACCESS_KEY)
    shared_access_key_name =  dict_keys.get(SHARED_ACCESS_KEY_NAME)
    gateway_hostname = dict_keys.get(GATEWAY_HOST_NAME)
    hostname = dict_keys.get(HOST_NAME)
    device_id = dict_keys.get(DEVICE_ID)
    module_id = dict_keys.get(MODULE_ID)
    
    ## Create you own shared access signature from the connection string that you have
    ## Azure IoT Explorer can be used for this purpose.
    #sas_token_str = "<YOUR SAS TOKEN STRING>"
    sas_token_str = "SharedAccessSignature sr=xxxxxx.azure-devices.net%2Fdevices%2Ftestdevice&sig=vD%2BXXXXXXX7ARdsN%2FotXXXXXXXXYPDSE%3D&se=1640161765"
    
    ## Create username following the below format '<HOSTNAME>/<DEVICE_ID>'
    username = hostname + '/' + device_id

    ## Create UMQTT ROBUST or UMQTT SIMPLE CLIENT
    mqtt_client = create_mqtt_client(client_id=device_id, hostname=hostname, username=username, password=sas_token_str, port=8883, keepalive=120, ssl=True)

    print("connecting")
    mqtt_client.reconnect()
    
    subscribe_topic = get_c2d_topic(device_id)
    mqtt_client.set_callback(callback_handler)
    mqtt_client.subscribe(topic=subscribe_topic)

    print("Publishing")
    topic = get_telemetry_topic(device_id)

    ## Send telemetry
    for i in range(0, len(messages)):
        msg = json.dumps({"level": i})
        print("Sending message : " + msg)
        mqtt_client.publish(topic=topic, msg=msg)
        utime.sleep(2)

    ## Send a C2D message and wait for it to arrive at the device
    #print("waiting for message")
    #mqtt_client.wait_msg()
    mqtt_client.disconnect()

if __name__ == "__main__":
    demo()

```

![image](https://user-images.githubusercontent.com/2126804/147018077-41b5d563-8f1d-49a3-b369-cec44e133274.png)
