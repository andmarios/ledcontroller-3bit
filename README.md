# ledcontroller-3bit #

A Linux command line utility to control usb mail notifiers identified as:

    $ lsusb
    Bus 001 Device 010: ID 1294:1320 RISO KAGAKU CORP.

### Get and compile:

    $ git clone https://github.com/andmarios/ledcontroller-3bit.git
    $ cd ledcontroller-3bit/
    $ make

### Run:

    $ ./ledcontroller blue | red | green | aqua | purple | yellow | white |  off

### Install permanently:

    $ sudo install -m root -g root -m 755 ledcontroller /usr/bin/ledcontroller

### Uninstall:

    $ sudo rm /usr/bin/ledcontroller

## Requisites:

+ libusb:1 or libusb-1.0-dev, depending on your distribution
+ a system which can compile binaries (package build-essentials for Debian based distributions)

---

## Copyright

This code is a fork of the ledcontroller code by jmrobles <http://robleshermoso.wordpress.com>.

My contribution to the code was trivial. I added support for all the 7 colors of the notifier
as the original code only supported the 3 basic colors.

As jmrobles' website is in Spanish, his code on dropbox and I had a difficult time finding
it, I uploaded it to GitHub.

The code is distributed under the terms of the GNU General Public License v3. You can find more information inside `main.c`

