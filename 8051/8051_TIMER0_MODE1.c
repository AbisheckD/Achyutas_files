#incldue<reg51.h>
sbit LED = P1^0;
int main()
{
	while(1)
	{
	LED=~LED;
	delay();
	}
}

void delay()
{
TMOD = 0x01;                    //  select mode
TH0 = 0xFF;                     //  delay for 1ms
TL0 = 0x66;
TR0 = 1;                        //  TCON reg start condition
	while(TF0 == 0);       	//  overflow flag is polled till it turns 1 as -> TF1 = 1
	TR0 = 0;
	TF0 = 0;
}
