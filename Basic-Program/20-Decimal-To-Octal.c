// WAP to Convert a Decimal to Octal 

#include <stdio.h>

int main(){
    int decimal;
    int octal[20];
    int i=0;
    
    printf("Enter a decimal number : ");
    scanf("%d",&decimal);

    while(decimal != 0){
        octal[i++] = decimal % 8;
        decimal /= 8;
    }

    printf("Octal number : ");
    for(int j=i-1 ; j>=0 ; j--){
        printf("%d",octal[j]);
    }

    return 0;
}