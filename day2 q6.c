#include<stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        int k=i;
        for(int j=4-i;j>0;j--){
            printf(" ");
        }
        for (int l = 0; l < i; l++)
        {
            printf("%d",k);
            k++;
        }
        k=k-2;
        while(k>=i){
            printf("%d",k);
            k--;
        }
        printf("\n");

    }
}



