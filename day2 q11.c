#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=n-1;
    for(int i=1;i<=n;i++){
        int k=1;
        while (k<=i)
        {
            printf("%d",k);
            k++;
        }
        k=k-1;
        for(int j=1;j<=((2*a));j++){
            printf(" ");
            
        }
        while (k>=1){
            printf("%d",k);
            k--;
        }
        printf("\n");
        a--;
        
    }
}

