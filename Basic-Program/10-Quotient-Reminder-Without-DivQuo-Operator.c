// WAP to find a quoƟent and reminder of 2 number (bigger number should be divided by lower 
// number) and you are not allowed to use a division and quoƟent operator. 

#include <stdio.h>

int main(){
    int n1,n2,bigger,smaller;
    printf("Enter a number 1 : ");
    scanf("%d",&n1);
    printf("\nEnter a number 2 : ");
    scanf("%d",&n2);
    
    if(n1 > n2){
        bigger = n1;
        smaller = n2;
    }
    else{
        bigger = n2;
        smaller = n1;
    }

    int remainder = bigger;
    int quotient = 0;
    while(remainder >= smaller){
        remainder -= smaller;
        quotient++;
    }

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}