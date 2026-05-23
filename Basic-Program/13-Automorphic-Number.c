// WAP to find weather given number is Automorphic or not. 
// An automorphic number is a number whose square ends with the same digits as the number 
// itself.  
// For example, 5 is automorphic because 5² = 25, which ends in 5.  
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76. 

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int powerOfN = (n*n);
    int lastDigitOfN = n%10;
    int lastDigitodPowerOfN = powerOfN%10;

    if(lastDigitOfN == lastDigitodPowerOfN)
        printf("%d is Automorphic number!" , n);
    else
        printf("%d is not a Automorphic number!" , n);
    return 0;
}