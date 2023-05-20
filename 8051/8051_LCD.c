#include <reg52.h>
#define port2 p2                        //  data/command through port 2
#define Rs  P3^0                        //  port 3 pin 0 for data/cmd
#define RW   P3^1                       //  port 3 pin 1 for read/write 
#define EN   P3^2                       //  port 3 pin 2 for enable

void ms_delay(unsigned int x)
{
	unsigned i,j;
	for(i = 0;i<x;i++)
	for(j = 0;j<1500;j++);
	
}
void lcd_cmd(unsigned char cmd)
{
	port2 = cmd;
	RS = 0;
	RW = 0;
	EN = 1;
	ms_delay(1);
	EN = 0;
}

Lcd_print(unsigned char data1)
{
	port2 = data1;
	RS = 1;
	RW = 0;
	EN = 1;
	ms_delay(1);                                                                                                                                                            
	EN = 0;                                                                                             
}

void lcd_init()
{
	lcd_cmd(0x38);
	ms_delay(10);
	lcd_cmd(0x0F);
	ms_delay(10);
	lcd_cmd(0x01);
	ms_delay(10);
	lcd_cmd(0x81);
	ms_delay(10);
}

void main()
{
	unsigned char arr[10] = "HelloWorld";
	int i= 0;
	lcd_init();
	while(arr[i] != '\0')
	{
		lcd_print(arr[i]);
		i++;
		ms_delay(50);
	}
}
