Init Network
======================================

This example demonstrates implementing TCP/UDP communication for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Network activate with DHCP 
```
>>> 
>>> import network
>>> nic = network.WIZNET5K(machine.SPI(0), machine.Pin(17), machine.Pin(20))
>>> nic.active(True)
netif link status changed up
netif status changed 0.0.0.0
>>> netif status changed 192.168.10.101

```
![image](https://user-images.githubusercontent.com/2126804/145947415-48b310f4-bd15-4699-8910-02efa7387f24.png)

## Network activate with Static IP
```
>>> 
>>> nic.ifconfig(('192.168.10.151', '255.255.255.0', '192.168.10.1', '8.8.8.8'))
netif status changed 0.0.0.0
>>> 
```
![image](https://user-images.githubusercontent.com/2126804/145947790-124640e8-4f46-49e2-901b-1fe816b9e8b5.png)
