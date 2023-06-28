#include<pic.h>
#define _XTAL_FREQ 20000000

#define LED_ON RB0=1
#define LED_OFF RB0=0

void delay(unsigned int x)
{
  while(x--);
}

void main(void)
{
  TRISB0=0;

  while(1)
	{
		LED_ON;
		delay(65000);
		LED_OFF;
		delay(65000);
	}
}
