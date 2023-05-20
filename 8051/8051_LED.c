#include<reg52.h>

sbit LED = P2^0;                  //   port 2 pin 0 used to toggle LED

void ms_delay(void);

void main(void)
{
	while(1)
	{
		LED = 0;        //  LED in OFF state
		ms_delay();
		LED = 1;        //  LED on ON state
		ms_delay();
	}
}

void ms_delay(void)
{
	int i,j;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10000; j++);
	}
}
