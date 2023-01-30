#include <stdio.h>
#include <string.h>
void Lowercase(char[]);
void Arraysort(char[]);
int main ()
{
char str1[] = "Rat", str2[] = "Tar";
int a1, b = 0;
//length of strings is compared
if(strlen(str1) != strlen(str2))
{
printf("Both the strings are not anagram");
return 0;
}
else
{
Lowercase(str1);
Lowercase(str2);
Arraysort(str1);
Arraysort(str2);
for(a1 = 0; a1 < strlen(str1); a1++)
{
if(str1[a1] != str2[a1])
{
printf("Both the strings are not anagram");
return 0;
}
}
printf("Both the strings are anagram");
}
return 0;
}
void Lowercase(char a[])
{
int c;
for(c = 0; c < strlen(a)-1; c++)
{
a[c] = a[c]+32;
}
}
void Arraysort(char a[])
{
int temp = 0,k,l;
for(k = 0; k < strlen(a)-1; k++)
{
for (l = k+1; l < strlen(a); l++)
{
if(a[k] > a[l])
{
temp = a[k];
a[k] = a[l];
a[l] = temp;
}
}
}
}
