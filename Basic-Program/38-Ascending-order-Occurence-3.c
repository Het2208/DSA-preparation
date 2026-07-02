// Write a FuncƟon that returns either 1 or 0 based on following condiƟon if the array is in 
// ascending order and occurrence of that number at least 3 then it should return 1 otherwise 
// it should return 0. 
// e.g. 
// if A=[1,1,1,2,2] it should return 0 
// if A=[1,1,1,3,3,3,3] it should return 1 
// if A=[2,2,2,1,1,1] it should return 0

#include <stdio.h>


int AscendingOccurence(int arr[] , int n){
    int i=0;
    while(i < n){
        if(i>0  && arr[i] < arr[i-1]){
            return 0;
        }
        int occurenceCount = 1;
        while(i+1 < n && arr[i] == arr[i+1]){
            occurenceCount++;
            i++;
        }
        if(occurenceCount < 3){
            return 0;
        }
        i++;
    }
    return 1;
}

// int AscendingOccurence(int arr[] , int n){
//     int i=0;
//     while(i < n){
//         if(arr[i+1] < arr[i]){
//             return 0;
//         }
//         int occurenceCount = 1;
//         while(arr[i] == arr[i+1]){
//             occurenceCount++;
//             i++;
//         }
//         if(occurenceCount < 3){
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d" , AscendingOccurence(arr , n));
    return 0;
}