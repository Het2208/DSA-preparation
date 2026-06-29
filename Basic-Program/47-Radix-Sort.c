#include <stdio.h>

// Function to find the maximum number
int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Counting sort based on digit (exp)
void countSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    // Count occurrences of digits
    for(int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Convert count to cumulative count
    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (stable sort)
    for(int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy output back to arr[]
    for(int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort function
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);

    // Apply counting sort for each digit
    for(int exp = 1; max / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// Print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
        
    radixSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
