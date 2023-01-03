#include<stdio.h>
void main()
{
    int i,n,p;
    float sum=0;
    printf("MAX NO. OF ELEMENTS IN SERIES:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    p=i*(i+1)*(i+2);
    sum=sum+p*(1.0);
    }
    printf("SUM OF SERIES IS : %f",sum);


}