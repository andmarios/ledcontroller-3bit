/*
    LedController 
    Copyright (C) 2011  jmrobles - http://robleshermoso.wordpress.com

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <libusb.h>
#include <errno.h>


#define VID 0x1294
#define PID 0x1320


static struct libusb_device_handle *devh = NULL;

int main(int argc,char** argv)
{
 int ret;
 unsigned char code = 0;
 if (argc != 2 ) 
 {
    printf("syntax: %s red | green | blue | off\n",argv[0]);
    return -1;

 }
 if ( strcmp(argv[1],"red") == 0 ) 
 {
     code = 2;
 }
 else if ( strcmp(argv[1],"green") == 0 )
 {
     code = 3;
 }
 else if ( strcmp(argv[1],"blue") == 0 )
 {
     code = 1;
 }

 libusb_init(NULL);
 devh = libusb_open_device_with_vid_pid(NULL, VID, PID);
 if (devh == NULL )
 {
	printf("not found\n");
        return -1;
 }

 if ( libusb_kernel_driver_active(devh,0) )
 {
	printf("detach from kernel\n");
        ret = libusb_detach_kernel_driver(devh,0);
        if (ret < 0 )
        {
		printf("can't detach\n");
                return -1;
        }
 }

 char data[5];
 data[0] = code;
 data[1] = 0x4;
 data[2] = 0x4;
 data[3] = 0x4;
 data[4] = 0x4;

 int dummy;
 ret =  libusb_interrupt_transfer(devh,0x2,data,5,&dummy,0);
 if ( ret < 0 ) 
 {
  perror("error");
 }


return 0;
}
