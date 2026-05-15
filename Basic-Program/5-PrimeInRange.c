// WAP to find a prime number between range (range should be entered by user

#include <stdio.h>

int main() {
    int first, end;
    printf("Enter first number of range: ");
    scanf("%d", &first);
    printf("Enter last number of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", first, end);

    for (int num = first; num <= end; num++) {
        if (num < 2)
            continue; 

        int isPrime = 1; 
        for (int i = 2; i<= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    return 0;
}
