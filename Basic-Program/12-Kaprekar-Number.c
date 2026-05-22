// WAP to find weather given number is Kaprekar or not. 
// A Kaprekar number is a non-negative integer that, when squared, can be split into two parts 
// whose sum equals the original number.  
// For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 + 
// 25 = 45. 

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n > 0){
        int square = n*n;
        int temp=square;
        int digits=0;
        while(temp!=0){
            digits++;
            temp /= 10;
        }

        int divisor = pow(10 , digits/2);
        int right = square % divisor;
        int left = square / divisor;

        if((left+right) == n){
            printf("%d is Kaprekar number",n);
        }
        else{
            printf("%d is not a Kaprekar number",n);
        }
    }
    else{
        printf("%d is not a Kaprekar number",n);
    }
    return 0;
}