#include<pic.h>
#define _XTRA_FREQ 20000000

void interrupt external_interrupt()
{
	if(INTF == 1)
	{
		PORTC = ~PORTC;
		INTF = 0;
	}
}

void main()
{
	GIE=1;     //global interrupt enable 
	PEIE=1;    //peripheral interrupt enable
	INTE=1;    //External interrupt enable
	INTEDG=1;  //selected for rising edge
	TRISB=0x01;
	TRISC=0x00;
	while(1)
	{
	}
}
