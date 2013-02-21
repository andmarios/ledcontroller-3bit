# ledcontroller-3bit #

A Linux command line utility to control usb mail notifiers identified as:

    $ lsusb
    Bus 001 Device 010: ID 1294:1320 RISO KAGAKU CORP.


Inside the scripts folder you will find some simple bash scripts you can use to control the notifier.
For example the script `mled-cputemp` will make it respond to your CPU's temperature.

### Get and compile: ###

    $ git clone https://github.com/andmarios/ledcontroller-3bit.git
    $ cd ledcontroller-3bit/
    $ make

### Run: ###

    $ ./ledcontroller blue | red | green | aqua | purple | yellow | white |  off

### Install permanently: ###

    $ sudo install -m root -g root -m 755 ledcontroller /usr/bin/ledcontroller

### Uninstall: ###

    $ sudo rm /usr/bin/ledcontroller
    
### Have fun: ###

Take a look inside the _scripts_ directory.

## Requisites: ##

+ libusb:1 or libusb-1.0-dev, depending on your distribution
+ a system which can compile binaries (package build-essentials for Debian based distributions)

## Hardware ##

I think [this is my notifier](http://www.andmarios.com/links/mail-usb-notifier) but I can't be sure as I bought it a couple of years ago from eBay.

---


## Copyright ##

This code (files `main.c` and `Makefile`) is a fork of the ledcontroller code by jmrobles (<http://robleshermoso.wordpress.com>).

My contribution to this code is very small and probably I could never write this on my own.
I added support for all the 7 colors of the notifier as the original code only supported the
3 basic colors. Also I hopefully fixed an issue with a warning output at the kernel's log.

The code is distributed under the terms of the GNU General Public License v3. You can find more
information and the original license inside `main.c`.
