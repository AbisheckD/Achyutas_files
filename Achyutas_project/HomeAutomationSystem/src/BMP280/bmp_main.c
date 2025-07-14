#include<stdio.h>
#include"bmp_c.h"
#include"../../include/global.h"

int BMP280_READ(double* pressure, double* temprature)
{
	int8_t rslt;
	struct bmp280_dev bmp;
	struct bmp280_config conf;
	struct bmp280_uncomp_data ucomp_data;
	double pres, temp;

	conf.filter = BMP280_FILTER_OFF;			// IIR filter
	conf.os_temp = BMP280_OS_2X;				// Temperature over sampling
	conf.os_pres = BMP280_OS_16X;				// Pressure over sampling
	conf.odr = BMP280_ODR_0_5_MS;				// Setting the output data period as 500us

	bmp_init(&bmp, &conf, &ucomp_data, USE_I2C);

	rslt |= get_values(&temp, &pres, &bmp, &ucomp_data);	// Getting the compensated temperature as floating point value

	*pressure = pres;
	*temprature = temp;
	//printf("Temperature: %.2f C \r\nPressure: %.2f hPa \r\n", temp, pres / 100);
	bmp.delay_ms(1000);

	close_all(bmp);
	return rslt;
}
