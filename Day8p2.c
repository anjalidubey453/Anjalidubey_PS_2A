#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,p,m,i,r,c=0;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("enter value of k");
    scanf("%d",&k);
    while(p>0&&c<k)
    {
        r=p%10;
        c++;
        if(c==k)
         printf("kthdigit is %d",r);
        p=p/10;

    }
/*
    if((c==k))
    {
        printf("kthdigit is not there");
    }
     else
     {
         printf("kthdigit is %d",r);
     }  */
}

