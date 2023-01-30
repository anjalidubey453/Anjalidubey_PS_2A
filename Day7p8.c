#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{

  int number;
  int sum;
  int i;
  int option;
  char string1[80];
  char string2[80];

 printf("\nWelcome to Project 5!!!");
 printf("\nPlease type 1 for strings or 2 for pythagorean triples: ");
 scanf("%d", &option);
 if(option==1){
 printf("\nYou have chosen the program for strings");
 printf("\nPlease enter string 1 <ctrl d to quit>: \n1: ");
 scanf("%s", string1);
 printf("\nPlease enter string 2 <ctrl d to quit>: \n2: ");
 scanf("%s", string2);
}

 if(strcmp(string1,string2)==0){
     printf("You have a match!!!");
}
  else{
          printf("You do not have a match");
}

if(strstr(string1, string2)==NULL){
    printf("\n\"%s\" was not found.", string2);
}
  else
         printf("\n\"%s\" was found in \"%s\"", string2, string1);

return 0;
}
