    // Given an array, rotate the array to the right by k steps, where k is non-negaƟve. 
    // Example 1: 
    // Input: nums = [1,2,3,4,5,6,7], k = 3 
    // Output: [5,6,7,1,2,3,4] 
    // ExplanaƟon: 
    // rotate 1 step to the right: [7,1,2,3,4,5,6] 
    // rotate 2 steps to the right: [6,7,1,2,3,4,5] 
    // rotate 3 steps to the right: [5,6,7,1,2,3,4]

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

        int k;
        printf("Enter a value of k : ");
        scanf("%d",&k);

        if(k >= n){
            k = k%n;
        }
        int rotatedArray[n];
        int j=0;

        for(int i=k+1 ; i<n ; i++){
            rotatedArray[j++] = arr[i];
        }

        for(int i=0 ; i<n-k ; i++){
            rotatedArray[j++] = arr[i];
        }

        printf("Rotated array : ");
        for(int i=0; i<n ; i++){
            printf("%d ",rotatedArray[i]);
        }

        return 0;
    }