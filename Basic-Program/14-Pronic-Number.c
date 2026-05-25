// WAP to find weather given number is Pronic or not. 
// A Pronic Number is defined as a number that is the product of two consecutive non-negative 
// integers. In other words, N is a Pronic Number if there exists a non-negative integer k such that N 
// = k * (k + 1).  
// E.g. 6 is a Pronic Number because 6=2*3

#include <stdio.h>
#include <stdbool.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    bool isPronic = false;
    int k=0;
    while(k <= n){
        int N = k * (k+1);
        if(N == n){
            isPronic = true;
            break;
        }
        k++;
    }

    if(isPronic){
        printf("%d is Pronic number",n);
    }
    else{
        printf("%d is not Pronic number",n);
    }

    return 0;
}