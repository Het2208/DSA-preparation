// WAP to Convert a Octal to decimal

#include<stdio.h>
#include<math.h>
int main(){
    int octal;
    int i=0;
    int decimal=0;

    printf("Enter a octal number : ");
    scanf("%d",&octal);

    while(octal != 0){
        int rem = octal % 10;
        decimal += rem * pow(8,i);
        octal /= 10;
        i++;
    }

    printf("Decimal number : %d",decimal);
    return 0;
}