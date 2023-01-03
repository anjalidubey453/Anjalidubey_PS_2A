#include<stdio.h>
void main()
{
    int i,n,fact=1;
    float sum=0;
    printf("MAX NO. OF ELEMENTS IN SERIES");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact*1.0)/i;
    }
    printf("sum of series%f",sum);

}