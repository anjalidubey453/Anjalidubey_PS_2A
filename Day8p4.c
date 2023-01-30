#include<stdio.h>
void main()
{
    int n,i,m,m1,r,c=0,mid,lsum=0,rsum=0,r1,r2;
    int arr[100];
    printf("enter a number");
    scanf("%d",&n);
    m=n;
    m1=n;
    while(m!=0)
    {
        r=m%10;
        m=m/10;
        c++;

    }
    for(i=0;i<=c;i++)
    {
        r=m1%10;
        m1=m/10;
        arr[i]=r;
    }
    if(c%2!=0)
    {
        mid=(0+c)/2;
        for(i=0;i<mid;i++)
        {
            lsum=lsum+arr[i];
        }
        for(i=mid+1;i<=c;i++)
        {
            rsum=rsum+arr[i];
        }
        if(lsum==rsum)
        {
            printf("balanced number");
        }
       else
        {
            printf("not a balanced number");
        }
    }
    else
    {
        printf("wrong input");
    }
}
