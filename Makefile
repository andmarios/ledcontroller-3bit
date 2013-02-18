

all: ledcontroller

ledcontroller:  main.c
	gcc -o $@ $^ `pkg-config libusb-1.0 --cflags --libs` 

clean:
	rm ledcontroller
