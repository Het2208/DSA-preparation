// Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
// 11, ...]  
// Input: n = 11  
// Output: 0  
// ExplanaƟon: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of 
// the number 10.
#include <stdio.h>

int countDigits(int num) {
    int count = 0;

    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int num = 1;

    while (1) {
        int digits = countDigits(num);

        if (n > digits) {
            n -= digits;
            num++;
        } else {
            // nth digit is inside num
            int temp = num;

            // remove digits from right
            for (int i = 1; i < digits - n + 1; i++) {
                temp /= 10;
            }

            printf("Digit = %d\n", temp % 10);
            break;
        }
    }

    return 0;
}