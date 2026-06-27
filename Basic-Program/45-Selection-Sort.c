
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

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            if (min_idx != i)
            {
                int temp = arr[i];
                arr[i] = arr[min_idx];
                arr[min_idx] = temp;
            }
        }
    }

    printf("Sorted Array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}