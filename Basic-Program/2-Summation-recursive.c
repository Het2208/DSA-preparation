#include <stdio.h>
#include <stdlib.h>

int Summation_recursive(int num, int sum) {
    if (num == 0) 
        return sum;
    
    int reminder = num % 10;      
    sum += reminder;              
    num = num / 10;               
    
    return Summation_recursive(num, sum);
}

int main(){
    int num;
    printf("Enter a Number to find Summation: ");
    scanf("%d", &num);
    num = abs(num); 
    
    int result = Summation_recursive(num, 0);
    printf("Summation: %d\n", result);
    
    return 0;
}
