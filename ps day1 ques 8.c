#include<stdio.h>
void main()
{
int x,y;
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
printf("1st quadrant");
else if(x<0&&y>0)
printf("2nd quadrant");
else if(x<0&&y<0)
printf("3rd quadrant");
else
printf("4th quadrant");
}
