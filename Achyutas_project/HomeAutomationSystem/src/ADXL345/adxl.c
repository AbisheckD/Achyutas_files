#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<sys/ioctl.h>
#include<linux/i2c-dev.h>
#include<time.h>

#include"../../include/global.h"
#define SLAVE_ADDRESS 0x53
#define I2C_DEVICE "/dev/i2c-2"

void ADXL_INIT()
{
	int fd, wr_fd, rd_fd, dev;
	char configure[2];

	fd = open("I2C_DEVICE",O_RDWR);
	if(fd < 0)
	{
		perror("/dev/i2c-2:");
		exit(0);
	}
	
	dev = ioctl(fd,I2C_SLAVE,SLAVE_ADDRESS);
	if(dev < 0)
	{
		perror("Device dosen't exist!!!:");
		exit(0);
	}
	
	/*	Register 0x2C—BW_RATE (Read/Write)	*/
	configure[0] = 0x2c;
	configure[1] = 0x0A;
	wr_fd = write(fd,configure,2);
	if(wr_fd < 0)
	{
		perror("Failed to write to register!!!:");
		exit(0);
	}

	/*	Register 0x2D—POWER_CTL (Read/Write)	*/
	configure[0] = 0x2d;
	configure[1] = 0x08;
	wr_fd = write(fd,configure,2);
	if(wr_fd < 0)
	{
		perror("Failed to write to register!!!:");
		exit(0);
	}

	/*	Register 0x31—DATA_FORMAT (Read/Write)	*/
	configure[0] = 0x31;
	configure[1] = 0x08;
	wr_fd = write(fd,configure,2);
	if(wr_fd < 0)
	{
		perror("Failed to write to register!!!:");
		exit(0);
	}

	close(fd);
}

void ADXL_READ(unsigned short int* x, unsigned short int* y, unsigned short int* z)
{
	int fd, wr_fd, rd_fd, dev;
	char data_reg[1],data[6];

	fd = open("I2C_DEVICE",O_RDWR);
	if(fd < 0)
	{
		perror("/dev/i2c-2:");
		exit(0);
	}
	
	dev = ioctl(fd,I2C_SLAVE,SLAVE_ADDRESS);
	if(dev < 0)
	{
		perror("Device dosen't exist!!!:");
		exit(0);
	}

	data_reg[0] = 0x32;
	wr_fd = write(fd, data_reg,1);
	if(wr_fd < 0)
	{
		perror("Failed to write to register!!!:");
		exit(0);
	}
	
	rd_fd = read(fd, data, 6);
	if(rd_fd < 0)
	{
		perror("Failed to read from register!!!:");
		exit(0);
	}

	*x = (((unsigned short int)data[1] << 8) | ((unsigned short int)data[0]));
	*y = (((unsigned short int)data[3] << 8) | ((unsigned short int)data[2]));
	*z = (((unsigned short int)data[5] << 8) | ((unsigned short int)data[4]));

	close(fd);
}
