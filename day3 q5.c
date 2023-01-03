#include<stdio.h>
void main()
{
    int i,n,x,fact=1,y;
    float sum=0,s,p;
    printf("MAX NO. OF ELEMENTS IN SERIES");
    scanf("%d",&n);
    printf("ENTER THE VALUE OF X");
    scanf("%d",&x);
    {
    for(i=1;i<=(2*n)-1;i++)
    {
        p=pow(x,i);
        fact=fact*i;
        y=i/2;
        s=pow(-1,y);
    if(i%2==0)
    {
    p=0;
    sum=sum+(p*s)/fact;
    }
    else
    {
      sum=sum+(p*s)/fact;
    }
    }
    printf("SUM OF SERIES %f",sum);
    }
}