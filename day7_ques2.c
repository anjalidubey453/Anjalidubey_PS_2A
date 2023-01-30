#include<stdio.h>
#include<string.h>
void rev(char s[])
{
    int i;
    for(i=(strlen(s)-1);i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
int main()
{
char s[100];
printf("enter the string\n");
scanf("%s",s);
printf("reverse of the string\n");
rev(s);
}