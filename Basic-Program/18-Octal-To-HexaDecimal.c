// WAP to convert an Octal into hexa

#include<stdio.h>
#include<math.h>

int main(){
    char hex[20];
    int i=0;
    int octal;
    int decimal = 0;
    printf("Enter a octal number : ");
    scanf("%d",&octal);
    int temp = octal;

    while(temp != 0){
        int rem = temp % 10;
        decimal += rem * pow(8,i);
        temp /= 10;
        i++;
    }

    i=0;
    while(decimal != 0){
        int rem = decimal%16;
        if(rem < 10){
            hex[i++] = rem + '0';
        }
        else{
            hex[i++] = rem-10 + 'A';
        }
        decimal/=16;
    }

    printf("Hexadecimal = ");
    for(int j=i-1 ; j>=0 ; j--){
        printf("%c",hex[j]);
    }
    return 0;
}