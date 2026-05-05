//WAP to find a factorial of a given integer (iterative and recursive)

#include<stdio.h>

int fact_recursive(int num){
    
    if(num == 0 ) return 1;
    else return num*fact_recursive(num-1);
}

int main(){
    int num;
    printf("Enter a Number to find factorial:");
    scanf("%d",&num);

    printf("Factorial of %d = %lld", num, fact_recursive(num));
    return 0;   
}