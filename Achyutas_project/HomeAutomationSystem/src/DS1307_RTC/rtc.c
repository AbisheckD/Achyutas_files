#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include"../../include/global.h"

#define DS1307_ADDRESS 0x68
#define  DECIMAL_CONVERSION(DATA) ((DATA/10) * 16)+(DATA%10)
#define  BCD_DECIMAL(DATA) ((DATA/16) * 10)+(DATA%16)

void Write_ds1307(int year,int month,int date,int day, int hours,int minute,int seconds)
{
	int fd;
	fd = open("/dev/i2c-2",O_RDWR);
	if(fd < 0)
	{
		printf("Failed to open");
          	exit(0);
	}
	if (ioctl(fd, I2C_SLAVE,DS1307_ADDRESS) < 0)
	{
		printf("Failed to select the RTC device.\n");
		exit(0);
	}
	unsigned char DS1307_write[8];
	DS1307_write[0] = 0x00;
	DS1307_write[1] = DECIMAL_CONVERSION(seconds);
	DS1307_write[2] = DECIMAL_CONVERSION(minute);
	DS1307_write[3] = DECIMAL_CONVERSION(hours);
	DS1307_write[4] = DECIMAL_CONVERSION(day);
	DS1307_write[5] = DECIMAL_CONVERSION(date);
	DS1307_write[6] = DECIMAL_CONVERSION(month);
	DS1307_write[7] = DECIMAL_CONVERSION(year);
	write(fd,DS1307_write,8);
	
	close(fd);
}

void Read_ds1307(int *year,int *month,int *date,int *day, int *hours,int *minute,int *seconds)
{
	int fd;
	fd = open("/dev/i2c-2",O_RDWR);
	if(fd < 0)
	{
		printf("Failed to open");
		exit(0);
	}
	if (ioctl(fd, I2C_SLAVE,DS1307_ADDRESS) < 0)
	{
		printf("Failed to select the RTC device.\n");
		exit(0);
	}

	unsigned char DS1307_read[8];
	DS1307_read[0] = 0x00;
	write(fd,DS1307_read,1);
	read(fd,DS1307_read,7);

	*seconds = BCD_DECIMAL(DS1307_read[0]&0x7F);
	*minute  = BCD_DECIMAL(DS1307_read[1]);
	*hours   = BCD_DECIMAL(DS1307_read[2]&0x3F);
	*day     = BCD_DECIMAL(DS1307_read[3]);
	*date    = BCD_DECIMAL(DS1307_read[4]);
	*month   = BCD_DECIMAL(DS1307_read[5]);
	*year    = BCD_DECIMAL(DS1307_read[6]);

	close(fd);
}
