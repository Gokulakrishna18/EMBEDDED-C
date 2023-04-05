#include<reg51.h>
#define SIGNAL  P1_0

void timer_init()
{
    TMOD = 0x02;
    TH0 = 0x3C;
    TL0 = 0xB0;
    ET0 = 1;
    TR0 = 1;
    EA = 1;
}
void timer_interrupt()
{
static unsigned char count = 0;
     count++;
    if(count == 100)
    {
        SIGNAL=1;
        count=0;
    }
}

void main()
{
    timer_init();
    while(1)
    {

    }
}
