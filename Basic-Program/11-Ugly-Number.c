// WAP to find weather given number is Ugly or not. 
// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5. 
// Input: n = 6 Output: true ExplanaƟon: 6 = 2 × 3

#include <stdio.h>
#include <stdbool.h>

int isUgly(int n){
    if (n<=0) return 0;

    while(n%2 == 0){
        n/=2;
    }

    while(n%3 == 0){
        n/=3;
    }

    while(n%5 == 0){
        n/=5;
    }

    return (n==1);
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(isUgly(n)) printf("Ugly Number");
    else printf("Not Ugly Number");

    return 0;
}