#include<stdio.h>
void main()
{
    int i,j,n,k;
        printf("enter no of rows");
        scanf("%d",&n); // for n=5
     for(i=0;i<=n/2;i++)
     {
         for(j=0;j<(n/2)-i;j++)
         {
             printf(" ");
         }
         for(k=0;k<(2*i)+1;k++)
         {
             printf("*");
         }
         printf("\n");
     }
     for(i=(n/2)-1;i>=0;i--)
     {
         for(j=0;j<(n/2)-i;j++)
         {
             printf(" ");
         }
         for(k=0;k<(2*i)+1;k++)
         {
             printf("*");
         }
         printf("\n");



}
}
