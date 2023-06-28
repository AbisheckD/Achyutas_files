#include<pic.h>
#define _XTRA_FREQ 20000000

unsigned char i=0;

void interrupt timer0()
{
	if(TMR0IF==1)
	{
		i++;
		TMR0IF=0;
	}
}

void main()
{
	GIE = 1;            //global interrupt enable
	PEIE = 1;           //peripheral interrupt enamble
	TMR0IE = 1;         //timer 0 interrupt enable
	OPTION = 0x07;      //option register to set prescalar as 256
	TMR0 = 59;          //calculated the timer 0 inital value for 10 milli second
	PORTB = 0x00;       //set port b as o/p
	while(1)
	{
		if(i==0)            
		{
			PORTB = 0x01;   
		}
		if(i==100)         //delay set for 10*100 = 1000 milli second (1 second)
		{
			PORTB = 0x00;   
		}
		if(i==200)          //delay set for another 1 second
		{
			i=0;
		}
	}
}
