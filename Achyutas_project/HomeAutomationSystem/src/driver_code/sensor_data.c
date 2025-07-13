#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
#include"../../include/global.h"

int main()
{
	int res;
	ADXL_INIT();
	while(1)
	{
		/*					Accelerometer Reading						*/
		ADXL_READ(&x_axis,&y_axis,&z_axis);
		printf("----- Accelerometer Reading -----\nX-axis:%hu\nY-axis:%hu\nZ-axis:%hu\n",x_axis,y_axis,z_axis);
		sleep(2);

		/*					Pressure Reading						*/
		res = BMP280_READ(&pressure, &temprature);	
		printf("----- BMP280 Reading -----\nPressure:%lf\nTemprature:%lf\n",pressure,temprature);
		sleep(2);

		/*					Real time clock Reading						*/
//		Write_ds1307(fd,23,6,28,2,12,32,20);
//		sleep(1);
		Read_ds1307(&year,&month,&date,&day,&hours,&minute,&seconds);
	        printf("Current date and time: 20%d-%d-%d %02d:%02d:%02d\n", year, month, date, hours, minute, seconds);
		sleep(2);

	}
	return 0;
}
