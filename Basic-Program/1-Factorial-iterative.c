//WAP to find a factorial of a given integer (iterative and recursive)

#include<stdio.h>

int main(){
    int num;
    long long fact=1;
    printf("Enter a number to find factorial:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("Factorial = %lld",fact);
    return 0;
} 