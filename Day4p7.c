#include<stdio.h>
  long int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
 int strong(int n)
{
    if(n==0)
        return 0;
    else
    return fact(n%10)+strong(n/10);
}
int main()
{
    int n ,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
       temp=n;
    if (strong(n)==temp)
    {
        print("%d is a strong number",temp);
    }
    else
    {
        printf("%d is not a strong number",temp);

   }
    return 0;
}
