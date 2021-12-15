# urequest example

This demonstrates an urequest package example for Raspberry PiPico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[Init Network](documents/init_network.md)**.

## upip install urequest 
```
>>> import upip
>>> upip.install("micropython-urequests")
Installing to: /lib/
Queue: ['micropython-urequests']
https://micropython.org/pi/micropython-urequests/json
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
Warning: micropython.org SSL certificate is not validated
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Tue, 14 Dec 2021 23:37:50 GMT
   Content-Type: application/octet-stream
   Content-Length: 121
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-79"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Installing micropython-urequests 0.6 from https://micropython.org/pi/urequests/urequests-0.6.tar.gz
https://micropython.org/pi/urequests/urequests-0.6.tar.gz
Address infos: [(2, 1, 0, '', ('176.58.119.26', 443))]
HTTPS TLS established : micropython.org 
   HTTP/1.1 200 OK
   Server: nginx/1.10.3
   Date: Tue, 14 Dec 2021 23:37:55 GMT
   Content-Type: application/octet-stream
   Content-Length: 1600
   Last-Modified: Wed, 15 May 2019 05:06:47 GMT
   Connection: close
   ETag: "5cdb9e67-640"
   Strict-Transport-Security: max-age=15768000
   Accept-Ranges: bytes
Skipping micropython_urequests.egg-info/PKG-INFO
Extracting /lib/urequests.py
{}
>>> 
>>> import os
>>> os.listdir('/lib')
['pystone_lowmem.py', 'urequests.py']
>>> 
```

## google.com example (HTTP)
```
>>> 
>>> import urequests
>>> r = urequests.request("GET", "http://www.google.com/")
>>> r.status_code
200
>>> r.encoding
'utf-8'
>>> r.content
b'<!doctype html><html itemscope="" itemtype="http://schema.org/WebPage" lang="ko"><head><meta content="text/html; charset=UTF-8" http-equiv="Content-Type"><meta content="/logos/doodles/2021/seasonal-holidays-2021-6753651837109324-6752733080595605-cst.gif" itemprop="image"><meta content="2021 &#50672;&#47568;&#50672;&#49884;" property="twitter:title"><meta content="&#46384;&#46907;&#54620; &#50672;&#47568; &#48372;&#45236;&#49464;&#50836; #GoogleDoodle" property="twitter:description"><meta content="&#46384;&#46907;&#54620; &#50672;&#47568; &#48372;&#45236;&#49464;&#50836; #GoogleDoodle" property="og:description"><meta content="summary_large_image" property="twitter:card"><meta content="@GoogleDoodles" property="twitter:site"><meta content="https://www.google.com/logos/doodles/2021/seasonal-holidays-2021-6753651837109324-2xa.gif" property="twitter:image"><meta content="https://www.google.com/logos/doodles/2021/seasonal-holidays-2021-6753651837109324-2xa.gif" property="og:image">
..............................................................................................................................
..............................................................................................................................
&#49325;&#51228;&#46104;&#50632;&#49845;&#45768;&#45796;.\\x22,\\x22psrl\\x22:\\x22&#49325;&#51228;\\x22,\\x22sbit\\x22:\\x22&#51060;&#48120;&#51648;&#47196; &#44160;&#49353;\\x22,\\x22srch\\x22:\\x22Google &#44160;&#49353;\\x22},\\x22ovr\\x22:{},\\x22pq\\x22:\\x22\\x22,\\x22refpd\\x22:true,\\x22refspre\\x22:true,\\x22rfs\\x22:[],\\x22sbas\\x22:\\x220 3px 8px 0 rgba(0,0,0,0.2),0 0 0 1px rgba(0,0,0,0.08)\\x22,\\x22sbpl\\x22:16,\\x22sbpr\\x22:16,\\x22scd\\x22:10,\\x22stok\\x22:\\x22X-aOc9nxBYiMnUWwLIfybWLq0Ks\\x22,\\x22uhde\\x22:false}}\';google.pmc=JSON.parse(pmc);})();</script>        </body></html>'
>>> 
```

## google.com example (HTTPS)
```
>>> 
>>> import urequests
>>> r = urequests.request("GET", "https://www.google.com/")
>>> r.status_code
200
>>> r.encoding
'utf-8'
>>> r.content
b'<!doctype html><html itemscope="" itemtype="http://schema.org/WebPage" lang="ko"><head><meta content="text/html; charset=UTF-8" http-equiv="Content-Type"><meta content="/logos/doodles/2021/seasonal-holidays-2021-6753651837109324-6752733080595605-cst.gif" itemprop="image"><meta content="2021 &#50672;&#47568;&#50672;&#49884;" property="twitter:title"><meta content="&#46384;&#46907;&#54620; &#50672;&#47568; &#48372;&#45236;&#49464;&#50836; #GoogleDoodle" property="twitter:description"><meta content="&#46384;&#46907;&#54620; &#50672;&#47568; &#48372;&#45236;&#49464;&#50836; #GoogleDoodle" property="og:description"><meta content="summary_large_image" property="twitter:card"><meta content="@GoogleDoodles" property="twitter:site"><meta content="https://www.google.com/logos/doodles/2021/seasonal-holidays-2021-6753651837109324-2xa.gif" property="twitter:image"><meta content="https://www.google.com/logos/doodles/2021/seasonal-holidays-2021-6753651837109324-2xa.gif" property="og:image">
..............................................................................................................................
..............................................................................................................................
&#49325;&#51228;&#46104;&#50632;&#49845;&#45768;&#45796;.\\x22,\\x22psrl\\x22:\\x22&#49325;&#51228;\\x22,\\x22sbit\\x22:\\x22&#51060;&#48120;&#51648;&#47196; &#44160;&#49353;\\x22,\\x22srch\\x22:\\x22Google &#44160;&#49353;\\x22},\\x22ovr\\x22:{},\\x22pq\\x22:\\x22\\x22,\\x22refpd\\x22:true,\\x22refspre\\x22:true,\\x22rfs\\x22:[],\\x22sbas\\x22:\\x220 3px 8px 0 rgba(0,0,0,0.2),0 0 0 1px rgba(0,0,0,0.08)\\x22,\\x22sbpl\\x22:16,\\x22sbpr\\x22:16,\\x22scd\\x22:10,\\x22stok\\x22:\\x22xZ-h_vxLcLqLApfeXCdOFELCbRU\\x22,\\x22uhde\\x22:false}}\';google.pmc=JSON.parse(pmc);})();</script>        </body></html>'
>>> 
```
![image](https://user-images.githubusercontent.com/2126804/146096398-6d92eb9d-8d02-43a4-bbfd-072279f9a034.png)

## micropython.org HTTPS(TLS) example
```
>>> 
>>> r = urequests.request("GET", "https://micropython.org/contact/")
>>> print(r.text)
<!DOCTYPE html>



<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!-- The above 3 meta tags *must* come first in the head -->

    <link rel="icon" href="/static/img/favicon.ico">

    <title>MicroPython - Python for microcontrollers</title>

    <link href="/static/bootstrap-3.3.7-dist/css/bootstrap.min.css" rel="stylesheet">

    <link href="/static/css/style.css?v=3" rel="stylesheet">

    

    <link href="https://fonts.googleapis.com/css?family=Open+Sans:400,700,800" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet">

    <meta property="og:type" content="website" />
    <meta property="og:url" content="http://micropython.org/" />
    <meta property="og:title" content="MicroPython - Python for microcontrollers" />
    <meta property="og:description" content="MicroPython is a lean and efficient
        implementation of the Python 3 programming language
        that includes a small subset of the Python standard library and is
        optimised to run on microcontrollers and in constrained environments." />
    <meta property="og:image" content="http://micropython.org/static/img/Mlogo_138wh.png" />

</head>

<body>

<nav class="navbar navbar-dark" role="navigation">
    <div class="main-menu">
        <a class="navbar-brand" href='http://micropython.org'>
            <span>
                <img src ="/static/img/Mlogo_138wh.png" width="50px">
            </span>
            <span>
                MicroPython
            </span>
        </a>

        <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar" aria-expanded="false" aria-controls="navbar">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
        </button>

        <div id="navbar" class="collapse navbar-collapse">
        <ul class="nav navbar-nav">
            <li class="nav-item">
                <a class="nav-link" href="http://forum.micropython.org">FORUM</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="http://docs.micropython.org">DOCS</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="http://docs.micropython.org/en/latest/pyboard/quickref.html"> QUICK-REF </a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="/download">DOWNLOAD</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="https://store.micropython.org">STORE</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="/contact">CONTACT</a>
            </li>
        </ul>
        </div>
    </div>
</nav>

    <div id="sidebar" style="float:right;margin-right:16px;">
        
        <!--ul>
        <li><a href="/">Home</a></li>
        <li><a href="/blog/">Blog</a></li>
        </ul-->
        
    </div>

    <div class="container">
        
        <div class="row" style="margin:30px 0;">
          <div class="col-md-offset-2 col-md-8">
            

<h1> Contact us </h1>

<p>
There is an active MicroPython community and you can join in at:
<ul>
    <li> <a href="https://forum.micropython.org">the MicroPython forum</a> </li>
    <li> <a href="https://github.com/micropython/micropython">MicroPython on GitHub</a> </li>
    <li> <a href="irc://freenode/micropython">the IRC channel</a> </li>
    <li> <a href="http://twitter.com/micropython">Twitter</a> </li>
    <li> <a href="http://www.facebook.com/micropython">Facebook</a> </li>
</ul>
</p>

<p>
If you have questions about sales or other enquiries, our contact email is:
<img src="/static/home/img/emx1.png" style="height:16px; vertical-align:-3px">
-at-
<img src="/static/home/img/emx2.png" style="height:16px; vertical-align:-3px">
.
</p>


          </div>
        </div>
    </div>

<footer>
    <div class="container footercontent">
        <div class="row">
            <div class="col-xs-12 col-sm-3 col-md-2 col-md-offset-2">
                <h3>MicroPython</h3>
                <ul>
                    <li> <a href="http://micropython.org">Home</a> </li>
                    <li> <a href="http://wiki.micropython.org">Wiki</a> </li>
                    <li> <a href="http://forum.micropython.org">Forum</a> </li>
                    <li> <a href="http://www.github.com/micropython">GitHub</a> </li>
                </ul>
            </div>
            <div class="col-xs-12 col-sm-3 col-md-2">
                <h3>Resources</h3>
                <ul>
                    <li> <a href="/help">Help!</a> </li>
                    <li> <a href="http://docs.micropython.org/en/latest/pyboard/tutorial/index.html">Tutorials</a> </li>
                    <li> <a href="http://docs.micropython.org">Documentation</a> </li>
                    <li> <a href="/download">Download</a> </li>
                </ul>
            </div>
            <div class="col-xs-12 col-sm-3 col-md-2">
                <h3>Contact</h3>
                <ul>
                    <li> <a href="/contact">Contact us</a> </li>
                    <li> <a href="irc://freenode/micropython">IRC</a> </li>
                    <li> <a href="http://twitter.com/micropython">Twitter</a> </li>
                    <li> <a href="http://www.facebook.com/micropython">Facebook</a> </li>
                    <li> <a href="/privacypolicy">Privacy Policy</a> </li>
                    <li> <a href="/termsandconditions">Terms &amp; Conditions</a> </li>
                </ul>
            </div>
            <div class="col-xs-12 col-md-8 col-md-offset-2">
                <p>A project by <a href="http://dpgeorge.net">Damien George</a></p>
                <p>&copy; 2014-2018 George Robotics Limited</p>
            </div>
        </div>
    </div>
</footer>

    <script src="/static/js/jquery-2.1.0.min.js"></script>
    <script src="/static/bootstrap-3.3.7-dist/js/bootstrap.min.js"></script>
    
    

    <!--                        
        <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js"></script>
        <script src="site/js/functions.js"></script>
    -->
</body>
</html>

>>> 
```
![image](https://user-images.githubusercontent.com/2126804/146099355-1f540462-7c1a-4887-a54c-50b809f678dc.png)

## Memory allocation problem
Since micropython, lwip and mbedTLS are all included, memory may be insufficient on a web page with a lot of data.
![image](https://user-images.githubusercontent.com/2126804/146104583-34673623-005b-4b4a-8cb1-d1d8653b0fcf.png)
