import os
import machine, rp2

######################################################
#220113 LED blink in boot.py
import time
from machine import Pin
led = Pin(25, Pin.OUT)
led.value(1)
time.sleep(0.1)
led.value(0)
time.sleep(0.1)
led.value(1)
time.sleep(0.1)
led.value(0)
time.sleep(0.1)
led.value(1)
time.sleep(0.1)
led.value(0)
######################################################


# Try to mount the filesystem, and format the flash if it doesn't exist.
# Note: the flash requires the programming size to be aligned to 256 bytes.
bdev = rp2.Flash()
try:
    vfs = os.VfsLfs2(bdev, progsize=256)
except:
    os.VfsLfs2.mkfs(bdev, progsize=256)
    vfs = os.VfsLfs2(bdev, progsize=256)
os.mount(vfs, "/")

del os, bdev, vfs
