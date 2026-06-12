// WAP to convert a hexa-decimal to Octal.

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    char hex[20];
    int i;
    int decimal = 0;

    printf("Enter a hexa-decimal value : ");
    scanf("%s", hex);

    int len = strlen(hex);

    for(i = 0; i < len; i++) {
        char ch = hex[len - 1 - i];

        if(ch >= '0' && ch <= '9') {
            decimal += (ch - '0') * pow(16, i);
        }
        else if(ch >= 'A' && ch <= 'F') {
            decimal += (ch - 'A' + 10) * pow(16, i);
        }
        else if(ch >= 'a' && ch <= 'f') {
            decimal += (ch - 'a' + 10) * pow(16, i);
        }
    }

    int octal[20];
    int j = 0;

    while(decimal != 0) {
        octal[j++] = decimal % 8;
        decimal /= 8;
    }

    printf("Octal number = ");

    for(i = j - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }

    return 0;
}