// WAP to delete an element from array specified by user. if element is not found print a message 
// “Element is not found” (do not take a new array).


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
    printf("Enter element to delete : ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            count++;
            i--;
        }
    }

    if (count == 0)
        printf("Element not found!!");
    else
    {
        printf("Array after deletion : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    // int pointer = 0;
    // int count = 0;

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] != x)  {
    //         arr[pointer++] = arr[i];
    //     }
    //     else {
    //         count++;
    //     }
    // }

    // if (count == 0) {
    //     printf("Element not found!!");
    // }
    // else {
    //     printf("Array after deletion: ");
    //     for (int i = 0; i < pointer; i++)  {
    //         printf("%d ", arr[i]);
    //     }
    // }
    return 0;
}