#include<pic.h>
#define _XTRA_FREQ 20000000

#define RS RC0
#define RW RC1
#define EN RC2

int a,b,c,d,e,f,adc;
float adc_value,temperature_value;

void lcd_data(unsigned char data)
{
	PORTB = data;
	RS = 1;
	RW = 0;
	EN = 1;
	delay(1000);
	EN = 0;
}

void lcd_cmd(unsigned char cmd)
{
	PORTB = cmd;
	RS = 0;
	RW = 0;
	EN = 1;
	delay(1000);
	EN = 0;
}

void lcd_string(const unsigned char *str, unsigned char length)
{
	unsigned char i;
	for(i=0;i<length;i++)
	{
		lcd_data(str[i]);
	}
}

void lcd_init(void)
{
	lcd_cmd(0x38);                    //to turn on lcd 16*2
	lcd_cmd(0x06);                    //increment lcd cursor by one after printing
	lcd_cmd(0x0C);                    //display on cursor off
	lcd_cmd(0x01);                    //clear screen
}

void delay(unsigned int x)
{
	while(x--);
}

void interrupt ADC_Conversion()
{
	if(ADIF == 1)                        //ADIF is adc interrupt flag
	{
		delay(2000);
		adc = (ADRESH<<8);
		adc = adc + ADRESL;
		ADIF = 0;
	}
}

void main()
{
	GIE = 1;                                //global interrupt enable
	PEIE = 1;                               //peripheral interrupt enable
	ADIE = 1;                               //adc interrupt enable
  
	TRISB = 0x00;
	TRISC = 0X00;
	lcd_init();
	lcd_cmd(0x80);                         //1st row 1st coloum to start printing in lcd
	lcd_string("Temperature :",13);

	ADCON0 = 0x41;                          
	ADCON1 = 0x8E;

	while(1)
	{
		ADGO = 1;

		adc_value = adc/2.0466;
		temperature_value = adc_value*100;
		
		lcd_cmd(0xC0);
		a = (int)temperature_value/10;        //example temperature = 2134 which is 213
		b = (int)temperature_value%10;        //4 
		c = a%10;                             //3
		d = a/10;                             //21
		e = d%10;                             //1
		f = d/10;	                          //2
		lcd_data(f + 0x30);
		lcd_data(e + 0x30);
		lcd_data('.');
		lcd_data(c + 0x30);
		lcd_data(b + 0x30);
		lcd_cmd(0x14); 
		lcd_string("'C",3);
	}
}
