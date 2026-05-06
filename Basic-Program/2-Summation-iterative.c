// WAP to find a summation of a digit of a given number. (Iterative and recursive)

#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,i,reminder,sum=0;
    printf("Enter a Number to find Summation:");
    scanf("%d",&num);
    num = abs(num);

    for(i=0;i<num;i++){
        reminder=num%10;
        sum+=reminder;
        num=num/10;
    }
    
    printf("Summation = %d",sum);
    return 0;
}