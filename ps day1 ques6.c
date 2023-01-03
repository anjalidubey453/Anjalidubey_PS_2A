#include<stdio.h>
void main()
{
int s1,s2,s3;
printf("enter three sides");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1==s2&&s2==s3)
{
printf("equilateral trianglr");
}
else if(s1==s2||s2==s3||s3==s1)
{
printf("isosceles triangle");
}
else
printf("scalene triangle");
}
