# Description    : It is a top-level Makefile that handles the compilation of the entire project. The Makefile is responsible for compiling 		       the drivers and generating the final binary/executable file. 


CC ?= gcc			# Default to gcc if CC is not provided

#CC=gcc				#x86
#CC=arm-linux-gnueabihf-gcc	#arm

all:bin/sensor_data
	echo "Build done"

bin/sensor_data:src/ADXL345/adxl.o src/BMP280/bmp_main.o src/BMP280/bmp280.o src/BMP280/bmp_commons.o src/DHT11/dht11.o src/AT24C256-EEPROM/eeprom.o src/DS1307-RTC/rtc.o src/driver_code/sensor_data.o
	@echo "Using $(CC) compiler"
	$(CC) src/ADXL345/adxl.o src/BMP280/bmp_main.o src/BMP280/bmp280.o src/BMP280/bmp_commons.o src/DHT11/dht11.o src/AT24C256-EEPROM/eeprom.o src/DS1307-RTC/rtc.o src/driver_code/sensor_data.o -o bin/sensor_data

src/ADXL345/adxl.o:
	make -C src/ADXL345
src/BMP280/bmp_main.o:
	make -C src/BMP280/
src/DHT11/dht11.o:
	make -C src/DHT11/
src/AT24C256-EEPROM/eeprom.o:
	make -C src/AT24C256-EEPROM/
src/DS1307-RTC/rtc.o:
	make -C src/DS1307-RTC/
src/driver_code/sensor_data.o:
	make -C src/driver_code/

clean:
	rm bin/sensor_data
	make -C src/ADXL345 clean
	make -C src/BMP280/ clean
	make -C src/DHT11/ clean
	make -C src/AT24C256-EEPROM/ clean
	make -C src/DS1307-RTC/ clean
	make -C src/driver_code/ clean
