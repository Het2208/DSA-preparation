// WAP  to  check  weather  number  is  present  in  array  or  not  (using  recursion  only)  and  the 
// function’s syntax is given below 
// Int isInArray(int a[],int m);  
// Where int a[] is Array of integer and m is element to be searched. 

#include <stdio.h>


int isInArray(int a[],int i, int x) {
    if(i==0) return -1;
    if(a[i] == x) return 1;
    return isInArray(a,--i,x);
}

// int isInArray(int arr[] , int idx , int n , int x){
//     if (idx == n) return -1;
//     if(arr[idx] == x) return 1;
//     return isInArray(arr,++idx,n,x);
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

    int x;
    printf("Enter a element to search : ");
    scanf("%d",&x);
    printf("%d",isInArray(arr,n,x));
    
    return 0;
}