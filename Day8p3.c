#include<stdio.h>
void main()
{    
    int num;
    int sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);   
    while(num>=9)//condition to check if num is single digit
    {
        sum = 0;
        while(num != 0) 
        {
            rem = num % 10;  
            sum += rem;      
            num = num / 10;  
        }
        num = sum;
    }
    printf("%d", sum);
}