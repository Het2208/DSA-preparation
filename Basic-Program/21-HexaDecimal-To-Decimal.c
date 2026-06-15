// WAP to Convert a Hexa-decimal to Decimal

#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char hex[20];
    int decimal = 0;

    printf("Enter hexa-decimal value : ");
    scanf("%s",hex);

    int len = strlen(hex);

    for(int i=0 ; i<len ; i++){
        int value;
        char ch = hex[len-1-i];

        if(ch >= '0' && ch <= '9')
            value = ch - '0';
        else if(ch >= 'A' && ch <= 'F')
            value = ch - 'A' + 10;
        else if(ch >= 'a' && ch <= 'f')
            value = ch  - 'a' + 10;
        else{
            printf("Invalid hexa-decimal number !");
            return 1;
        }
        decimal += value * pow(16,i);
    }
    printf("Decimal value = %d",decimal);
    return 0;
}