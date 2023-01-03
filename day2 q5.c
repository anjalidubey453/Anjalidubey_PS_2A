#include<stdio.h>
void main()
{
    int i,j,n,a=69;
        printf("enter no of rows");
        scanf("%d",&n); // for n=5
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {

            printf("%c",a+j-1);
         }

          printf("\n");
               a--;


     }



}
