# Project Name: Home Automation

## Description:
This project is home automation system using the BMP280 environmental sensor, ADXL345 accelerometer, and DS1307 real-time clock (RTC). Implemented advanced 
sensing capabilities with the BMP280 for accurate temperature, humidity, and pressure monitoring. Integrated the ADXL345 accelerometer to detect motion and 
trigger automated actions based on movement patterns. Utilized the DS1307 RTC for precise timekeeping and synchronization of various automated tasks. 
Created a user-friendly interface for controlling and monitoring the home automation system, enhancing convenience and energy efficiency. It includes 
drivers for ADXL345 accelerometer, BMP280 temperature and pressure sensor, DHT11 humidity and temperature sensor, AT24C256 EEPROM, and DS1307 RTC 
(Real-Time Clock). The driver code is located in the "src" directory, with each component having its own subdirectory.

### Project Structure:
The project directory structure is as follows:
- `bin/`      		          : Directory for storing the compiled binary/executable files.
- `include/`   		        : Directory containing project-wide header files.
  - `global.h` 	 	        : Global header file with common definitions and declarations.
- `src/`        		        : Directory containing the source code files for the project.
  - `ADXL345/`            : Directory for the ADXL345 accelerometer component.
    - `adxl.c`          	: Source code file for the ADXL345 driver.
    - `Makefile`        	: Makefile for compiling the ADXL345 driver.
  - `AT24C256-EEPROM/`     : Directory for the AT24C256 EEPROM component.
    - `eeprom.c`        	: Source code file for the AT24C256 EEPROM driver.
    - `Makefile`        	: Makefile for compiling the AT24C256 EEPROM driver.
  - `BMP280/`              : Directory for the BMP280 temperature and pressure sensor component.
    - `bmp280.c`        	: Source code file for the BMP280 driver.
    - `bmp280_defs.h`   	: Header file with definitions for BMP280 registers and constants.
    - `bmp280.h`        	: Header file with function prototypes for the BMP280 driver.
    - `bmp_c.h`         	: Header file with configuration options for the BMP280 driver.
    - `bmp_commons.c`   	: Source code file with common functions for the BMP280 driver.
    - `bmp_main.c`      	: Main source code file for using the BMP280 driver.
    - `Makefile`        	: Makefile for compiling the BMP280 driver.
  - `DHT11/`               : Directory for the DHT11 humidity and temperature sensor component.
    - `dht11.c`         	: Source code file for the DHT11 driver.
    - `Makefile`        	: Makefile for compiling the DHT11 driver.
  - `driver_code/`         : Directory for the main driver code and application.
    - `sensor_data.c`   	: Main source code file for the application.
    - `Makefile`        	: Makefile for compiling the main driver code.
  - `DS1307-RTC/`          : Directory for the DS1307 RTC (Real-Time Clock) component.
    - `rtc.c`           	: Source code file for the DS1307 RTC driver.
    - `Makefile`        	: Makefile for compiling the DS1307 RTC driver.

**Makefile:**
The project includes a top-level Makefile that handles the compilation of the entire project. The Makefile is responsible for compiling the drivers and generating the final binary/executable file. It also provides targets for cleaning up the build artifacts.

**Usage:**
1. To build the project, navigate to the project directory and run the following command:
  - `$ make`		                          : By default it will generate executable for x86
  - `$ make CC=arm-linux-gnueabihf-gcc`	  : This will generate executable for ARM
2. To clean the build artifacts, run:
  - `$ make clean`

**Author:** Abhishek Tamboli
