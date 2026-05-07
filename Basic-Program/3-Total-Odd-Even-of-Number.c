// WAP to find a total odd and total even digit of a given number.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d" , &n);
    int evenCount=0;
    int oddCount=0;
    while(n!=0){
        int rem = n%10;
        if(rem % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
        n /= 10;
    }
    printf("Odd Count : %d\n",oddCount);
    printf("Even Count : %d",evenCount);
    return 0;
}