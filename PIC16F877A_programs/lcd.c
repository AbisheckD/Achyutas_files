#include<pic.h>
#define _XTRA_FREQ 20000000

#define RS RC0
#define RW RC1
#define EN RC2

void lcd_data(unsigned char data)
{
	PORTB = data;
	RS = 1;
	RW = 0;
	EN = 1;
    delay(10000);
	EN = 0;
}

void lcd_cmd(unsigned char cmd)
{
	PORTB = cmd;
	RS = 0;
	RW = 0;
	EN = 1;
    delay(10000);
	EN = 0;
}

void lcd_string(const unsigned char *str,unsigned char length)
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
	lcd_cmd(0x06);                    //increment lcd cursor by one after printing(entry mode)
	lcd_cmd(0x0C);                    //display on cursor off
	lcd_cmd(0x01);                    //clear screen
}

void delay(unsigned int x)
{
	while(x--);
}

void main()
{
	TRISB = 0x00;
	TRISC = 0X00;
	lcd_init();

	while(1)
	{
		lcd_cmd(0x80);                //1st row 3rd column
		lcd_string("Embedded",8);
		lcd_cmd(0xC8);                //2nd row 1st column
		lcd_string("Engineer",8);
	}
}	
