/*************************************************** ADXL345 - Accelerometer *********************************************************/
/* Variable for ADXL345 - Accelerometer */
unsigned short int x_axis, y_axis, z_axis;		

/* Initialisation function for ADXL345 - Accelerometer */
void ADXL_INIT();					

/* Read function for ADXL345 - Accelerometer */
void ADXL_READ(unsigned short int* x, unsigned short int* y, unsigned short int* z);



/******************************************** BMP280 - Pressure and Temprature ********************************************************/
/* Variable for BMP280 - Pressure and Temprature */
double pressure, temprature; 

/* Read Function for BMP280 - Pressure and Temprature */
int BMP280_READ(double* pressure, double* temprature);


/************************************************ DS1307 - Real time clock  ************************************************************/
/* Variable for DS1307  - Real time clock */
int year, month, date, day, hours, minute, seconds;        

/* Read function for DS1307 - Real time clock */
void Read_ds1307(int *year,int *month,int *date,int *day, int *hours,int *minute,int *seconds);	

/* Write function for DS1307 - Real time clock */
void Write_ds1307(int year,int month,int date,int day, int hours,int minute,int seconds);
