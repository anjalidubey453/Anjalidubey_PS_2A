#include<stdio.h>
void main()
{
    int i,n,x,p,fact=1 ;
    float sum=0,a;
    printf("MAX NO. OF ELEMENTS IN SERIES");
    scanf("%d",&n);
    printf("ENTER THE VALUE OF X");
    scanf("%d",&x);
    for(i=1;i<n;i++)
    {
        p=pow(x,i);
        fact=fact*i;
    {
    if(i%2==0)
    {
        a=(p*(1.0))/fact;
    }
    else
        a=-(p*(1.0))/fact;
    }
        sum=sum+a;

        
    }
    
    if(n==1)
    {
    printf("1");
    }
    else
    {
    printf("SUM OF SERIES IS : %f",sum+1);
    }
}