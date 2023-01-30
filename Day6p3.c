#include<stdio.h>
 int main() {
   int size = 3;
   int m[3][3];
   int r, c = 0;
   int sum, sum1, sum2,flag=0;
   printf("Enter matrix : \n");
   for (r = 0; r < size; r++) {
      for (c = 0; c < size; c++)
         scanf("%d", &m[r][c]);
   }
  printf("Entered matrix is : \n");
   for (r= 0; r < size; r++) {
      printf("\n");
      for (c = 0; c < size; c++)
        {
         printf("\t%d", m[r][c]);
      }
   }

   //For diagonal elements
   sum = 0;
   for (r= 0; r < size; r++)
    {
      for (c = 0; c < size; c++)
      {
         if (r == c)
            sum = sum + m[r][c];
      }
   }

   //For Rows
   for (r = 0; r < size; r++)
    {
      sum1 = 0;
      for (c = 0; c < size; c++) {
         sum1 = sum1 + m[r][c];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   //For Columns
   for (r = 0; r < size; r++)
    {
      sum2 = 0;
      for (c = 0; c < size; c++)
       {
         sum2 = sum2 + m[c][r];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
      printf("\nMagic square");
   else
      printf("\nNo Magic square");

   return 0;
}
