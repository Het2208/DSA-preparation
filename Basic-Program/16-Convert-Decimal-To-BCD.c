// WAP to convert Decimal number to BCD

#include <stdio.h>

int main() {
    int num, digit;
    int bcd[20];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("BCD: 0000");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;      // extract digit
        bcd[i++] = digit;     // store digit
        num /= 10;
    }

    printf("BCD: ");
    for (int j = i - 1; j >= 0; j--) {
        for (int k = 3; k >= 0; k--) {
            printf("%d", (bcd[j] >> k) & 1);
        }
        printf(" ");
    }

    return 0;
}
