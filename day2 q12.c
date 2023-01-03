#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=n;i>=1;i--){
        int k=1;
        while (k<=i)
        {           
            printf("%d",k);
            k++;
        }
        if(i==n){
        k=k-2;
        }
        else{
            k=k-1;
        }
        for(int j=1;j<=((2*a)-1);j++){
            printf(" ");
        }
        while (k>=1)
        {
            printf("%d",k);
            k--;
        }
        
        printf("\n");
         a++;
}
}
