// WAP to enter an element at specific posiƟon into array. (Do not take a new array)

// WAP to enter an element at specific position into array. (Do not take a new array)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    int pos;
    printf("Enter a element you want to enter at position : ");
    scanf("%d", &x);
    printf("Enter a position : ");
    scanf("%d", &pos);

    for(int i = n-1 ; i>=pos ; i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = x;
    n++;
    printf("Array after insertion : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}