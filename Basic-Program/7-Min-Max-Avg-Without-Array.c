// WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value 
// should be taken from user (Note that you are not allowed to use an array for this)

#include <stdio.h>
#include <limits.h>

int main() {
    int n, num;
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input");
        return 0;
    }

    for(int i = 1; i <= n; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
            max = num;

        if(num < min)
            min = num;

        sum += num;
    }

    printf("\nMax = %d", max);
    printf("\nMin = %d", min);
    printf("\nAverage = %.2f", (float)sum / n);

    return 0;
}
