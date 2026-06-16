// WAP to find a sum of even number into 1D array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }

    printf("Sum of all element = %d",sum);
    return 0;
}