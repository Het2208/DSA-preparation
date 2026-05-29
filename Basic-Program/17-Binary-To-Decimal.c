// WAP to convert a Binary to Decimal. 

#include <stdio.h>

int main() {
    long long n;
    int decimal = 0, rem;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    int base = 1;
    while (n != 0) {
        rem = n % 10;       
        n /= 10;             
        decimal += rem  * base; 
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
