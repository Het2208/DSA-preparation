#include <stdio.h>

// Function to sort bucket using simple insertion sort
void insertionSort(float bucket[], int size) {
    for(int i = 1; i < size; i++) {
        float key = bucket[i];
        int j = i - 1;

        while(j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    float buckets[10][10];   // 10 buckets, each can hold 10 values
    int bucketCount[10] = {0};

    // Step 1: Put elements into buckets
    for(int i = 0; i < n; i++) {
        int index = arr[i] * 10;   // bucket index
        buckets[index][bucketCount[index]] = arr[i];
        bucketCount[index]++;
    }

    // Step 2: Sort each bucket
    for(int i = 0; i < 10; i++) {
        insertionSort(buckets[i], bucketCount[i]);
    }

    // Step 3: Collect elements from buckets
    int k = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < bucketCount[i]; j++) {
            arr[k++] = buckets[i][j];
        }
    }
}

// Print array
void printArray(float arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%.2f ", arr[i]);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    float arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
    bucketSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
