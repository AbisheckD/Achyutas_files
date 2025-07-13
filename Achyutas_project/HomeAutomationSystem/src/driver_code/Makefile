CC ?= gcc
#CC=gcc
#CC=arm-linux-gnueabihf-gcc

all:sensor_data.o
	echo "Sensor_data object file created"

sensor_data.o:sensor_data.c
	$(CC) -c sensor_data.c

clean:
	rm *.o
