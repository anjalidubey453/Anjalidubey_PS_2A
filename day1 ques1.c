#include<stdio.h>
void main()
{
int bs;
float ts,da,hra,pf,a;
char G;
printf("enter the basic salary");
scanf("%d",&bs);
printf("enter grade");
scanf("%c",&G);
hra=0.2*bs;
da=0.5*bs;
pf=0.11*bs;
if(G=='A')
{
    a=1700;
}
else if(G=='B')
{
    a=1500;
}
else
{
    a=1300;
}
ts=(hra+da+bs+a-pf);
printf("total salary is %f",ts);
}
