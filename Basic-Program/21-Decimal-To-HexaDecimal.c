// WAP to Convert a Decimal to Hexa-decimal 

#include<stdio.h>

int main(){
    int decimal;
    int i=0;
    char hex[20];
    printf("Enter a decimal value : ");
    scanf("%d",&decimal);

    int temp = decimal;
    while(temp != 0){
        int rem = temp % 16;
        if(rem < 10){
            hex[i++] = rem + '0';
        }
        else{
            hex[i++] = rem - 10 + 'A';
        }
        temp /= 16;
    }
    
    printf("HexaDecimal : ");
    for(int j=i-1 ; j>=0 ; j--){
        printf("%c",hex[j]);
    }
    return 0;
}