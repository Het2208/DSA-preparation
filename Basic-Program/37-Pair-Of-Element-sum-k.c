// Given an array of N integers, and an integer K, find the number of pairs of elements in the 
// array whose sum is equal to K. 
// e.g. Input: N = 4, K = 6 
// arr[] = {1, 5, 7, 1} 
// Output: 2 
// ExplanaƟon: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter a value of k : ");
    scanf("%d",&k);

    int sumPair = 0;
    
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] + arr[j] == k){
                sumPair++;
            }
        }
    }

    printf("Output -> %d",sumPair);

    return 0;
}