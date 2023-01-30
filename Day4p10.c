
/*
* C Program to find power of a number (a^b) using divide and conquer
*/
#include <stdio.h>
int main(){
    int base, exponent, counter, result = 1;
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent);

    result = power(base, exponent);

    printf("%d^%d = %d", base, exponent, result);
    getch();
    return 0;
}

int getSquare(int num){
    return num*num;
}
/*
 * Function to calculate base^exponent using recursion
 */
int power(int base, int exponent){
    /* Recursion termination condition,
     * Anything^0 = 1
     */
    if(exponent == 0){
        return 1;
    }
    if(exponent%2 == 1){
        /* If exponent is Odd number
         * a^b = a*(a^(b/2))*(a^(b/2))
         */
        return base * getSquare(power(base, exponent/2));
    } else {
        /* If exponent is Even number
         *  a^b = (a^(b/2))*(a^(b/2))
         */
        return getSquare(power(base, exponent/2));
    }
}
