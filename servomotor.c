#include<reg51.h>

#define output P2_0

void msdelay(unsigned int n)
{
  unsigned char i;
  for(n;n>0;n--)
  {
    for(i=255;i>0;i--)
    {
    }
    for(i=255;i>0;i--)
    {
    }
  }
}
void servo_delay(int times)
{
int m;
for(m=0;m<times;m++)
TH0=0xFF;
TL0=0xD2;
TR0=1;
while(TF0==0)
{
TF0=0;
TR0=0;
}
}
void main()
{

int n;
TMOD=0x01;
output=0;
while(1)
{
   for(n=10;n<=30;n+5)
   {
      output=1;
      servo_delay(n);
      output=0;
      servo_delay(360);
      msdelay(1000);
   }
}
}
