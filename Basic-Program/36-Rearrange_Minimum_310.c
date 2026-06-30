// You are given an integer num. Rearrange the digits of num such that its value is minimized 
// and it does not contain any leading zeros. 
// Return the rearranged number with minimal value. 
// Note that the sign of the number does not change aŌer rearranging the digits. 
// Input: num = 310 
// Output: 103 
// ExplanaƟon: The possible arrangements for the digits of 310 are 013, 031, 103, 130, 301, 
// 310. 
// The arrangement with the smallest value that does not contain any leading zeros is 103.

#include<stdio.h>

void buuble_Sort(int arr[] , int n){
    
    for(int i=0 ; i<n-1 ; i++){
        int exchs = 0;
        int temp;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                exchs = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(exchs == 0){
            break;
        }
    }
}

int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int count = 0;
    int temp = n;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    int arr[count];
    temp = n;
    for(int i=count-1 ; i>=0 ; i--){
        int rem = temp % 10;
        arr[i] = rem;
        temp /= 10;
    }

    buuble_Sort(arr , count);

    int j=0;
    while(arr[j] == 0){
        j++;
    }

    if(j < count){
        int t = arr[0];
        arr[0] = arr[j];
        arr[j] = t;
    }

    // int acount = count;
    // if(zeroCount){
    //     for(int i=j+1 ; i<count ; i++){
    //         acount++;
    //         int temp = arr[i+1];
    //         arr[i+1] = arr[i];
    //         arr[i+2] = temp;
    //     }
    //     int k=j+1;
    //     while (zeroCount != 0)
    //     {
    //         arr[k] = 0;
    //         zeroCount--;
    //     }
    // }

    printf("Minimum form arrangement that have no leading 0 : ");
    for(int i=0 ; i<count ; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
