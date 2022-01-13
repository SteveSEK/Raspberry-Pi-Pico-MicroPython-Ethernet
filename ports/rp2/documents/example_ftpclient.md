# FTP client example

This demonstrates a FTP Client example for Raspberry Pi Pico(RP2040) and Micropython using WIZnet W5100S.


## Hardware requirements
The W5100S-EVB-Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 microcontroller chip and full hardwired TCP/IP controller W5100S chip. 
The W5100S-EVB-Pico has the same role as the Raspberry Pi Pico platform and includes W5100S, so the Ethernet function is basically included.
But in this repo, I used ***W5100S MacRaw mode*** and ***lwIP TCP/IP stack***.

## Network activation
About network activation, you can refer **[Init Network](documents/init_network.md)**.

## FTP server for Test
**[GNU FTP Server](https://ftp.gnu.org/)** GNU FTP Server is open for anyone to use, so **[GNU FTP Server](https://ftp.gnu.org/)** will be used for testing. 
* FTP Server: ftp.gnu.org
* FTP Port: 21
* Log with Windows 10 FTP client  
* This FTP client example implements the Windows FTP example below using micropython. 
* Below is the windows ftp client connection log. And, this micropython example will show the same ftp client actions. 
![image](https://user-images.githubusercontent.com/2126804/148733411-a19a6600-33e7-47df-9200-a0049298257e.png)


## FTP Client example
```
>>> 
>>> import ftplib
>>> ftplib.demo()
*cmd* 'USER anonymous'
*put* 'USER anonymous\r\n'
*get* '230-NOTICE (Updated October 15 2021):\r\n'
*get* '230-\r\n'
*get* '230-If you maintain scripts used to access ftp.gnu.org over FTP,\r\n'
*get* '230-we strongly encourage you to change them to use HTTPS instead.\r\n'
*get* '230-\r\n'
*get* '230-Eventually we hope to shut down FTP protocol access, but plan\r\n'
*get* '230-to give notice here and other places for several months ahead\r\n'
*get* '230-of time.\r\n'
*get* '230-\r\n'
*get* '230----\r\n'
*get* '230-\r\n'
*get* '230-Due to U.S. Export Regulations, all cryptographic software on this\r\n'
*get* '230-site is subject to the following legal notice:\r\n'
*get* '230-\r\n'
*get* '230-    This site includes publicly available encryption source code\r\n'
*get* '230-    which, together with object code resulting from the compiling of\r\n'
*get* '230-    publicly available source code, may be exported from the United\r\n'
*get* '230-    States under License Exception "TSU" pursuant to 15 C.F.R. Section\r\n'
*get* '230-    740.13(e).\r\n'
*get* '230-\r\n'
*get* '230-This legal notice applies to cryptographic software only. Please see\r\n'
*get* '230-the Bureau of Industry and Security (www.bxa.doc.gov) for more\r\n'
*get* '230-information about current U.S. regulations.\r\n'
*get* '230 Login successful.\r\n'
*resp* '230-NOTICE (Updated October 15 2021):\n230-\n230-If you maintain scripts used to access ftp.gnu.org over FTP,\n230-we strongly encourage you to change them to use HTTPS instead.\n230-\n230-Eventually we hope to shut down FTP protocol access, but plan\n230-to give notice here and other places for several months ahead\n230-of time.\n230-\n230----\n230-\n230-Due to U.S. Export Regulations, all cryptographic software on this\n230-site is subject to the following legal notice:\n230-\n230-    This site includes publicly available encryption source code\n230-    which, together with object code resulting from the compiling of\n230-    publicly available source code, may be exported from the United\n230-    States under License Exception "TSU" pursuant to 15 C.F.R. Section\n230-    740.13(e).\n230-\n230-This legal notice applies to cryptographic software only. Please see\n230-the Bureau of Industry and Security (www.bxa.doc.gov) for more\n230-information about current U.S. regulations.\n230 Login successful.'
*cmd* 'TYPE A'
*put* 'TYPE A\r\n'
*get* '200 Switching to ASCII mode.\r\n'
*resp* '200 Switching to ASCII mode.'
*cmd* 'PASV'
*put* 'PASV\r\n'
*get* '227 Entering Passive Mode (209,51,188,20,114,221).\r\n'
*resp* '227 Entering Passive Mode (209,51,188,20,114,221).'
*cmd* 'LIST'
*put* 'LIST\r\n'
*get* '150 Here comes the directory listing.\r\n'
*resp* '150 Here comes the directory listing.'
lrwxrwxrwx    1 0        0               8 Aug 20  2004 CRYPTO.README -> .message
-rw-r--r--    1 0        0           17864 Oct 23  2003 MISSING-FILES
-rw-r--r--    1 0        0            4178 Aug 13  2003 MISSING-FILES.README
-rw-r--r--    1 0        0            2746 Oct 15 21:46 README
-rw-r--r--    1 0        0          405121 Oct 23  2003 before-2003-08-01.md5sums.asc
-rw-rw-r--    1 0        3003       240262 Jan 09 17:52 find.txt.gz
drwxrwxr-x  319 0        3003        12288 Nov 16 02:25 gnu
drwxrwxr-x    3 0        3003         4096 Mar 10  2011 gnu+linux-distros
-rw-rw-r--    1 0        3003       462086 Jan 09 17:52 ls-lrRt.txt.gz
drwxr-xr-x    3 0        0            4096 Apr 20  2005 mirrors
lrwxrwxrwx    1 0        0              11 Apr 15  2004 non-gnu -> gnu/non-gnu
drwxr-xr-x   97 0        0            4096 Sep 02 18:24 old-gnu
lrwxrwxrwx    1 0        0               1 Aug 05  2003 pub -> .
drwxr-xr-x    2 0        0            4096 Nov 08  2007 savannah
drwxr-xr-x    2 0        0            4096 Aug 02  2003 third-party
drwxr-xr-x    2 0        0            4096 Apr 07  2009 tmp
-rw-rw-r--    1 0        3003       542572 Jan 09 17:52 tree.json.gz
drwxr-xr-x    2 0        0            4096 May 07  2013 video
-rw-r--r--    1 0        0            1092 Oct 15 21:47 welcome.msg
*get* '226 Directory send OK.\r\n'
*resp* '226 Directory send OK.'
*cmd* 'QUIT'
*put* 'QUIT\r\n'
*get* '221 Goodbye.\r\n'
*resp* '221 Goodbye.'
>>> 
```
![image](https://user-images.githubusercontent.com/2126804/148728020-5783e3a5-fe73-426f-9c45-8a2973d2372e.png)

## FTP Client demo source
About this FTP Client demo source, you can refer **[here](examplecode/ftplib.py)**.
