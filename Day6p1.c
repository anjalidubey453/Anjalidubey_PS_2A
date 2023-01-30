#include<stdio.h>
 void main()
 {
     int a[3][3]={1,2,6,7,4,3,5,8,9},i,j;
     printf("Given matrix is:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {


         printf("%d",a[i][j]);
         }

     printf("\n");
     }
     printf("90 degrees rotated matrix clockwise:\n");
     for(i=0;i<3;i++)
     {
         for(j=2;j>=0;j--)
         {
             printf("%d",a[j][i]);
         }
            printf("\n");
     }
     return 0;
 }
