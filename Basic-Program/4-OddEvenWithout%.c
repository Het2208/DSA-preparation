// WAP to find whether a number is Odd or Even without using a % operator.

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);

//     if(n & 1){
//         printf("Odd number!");
//     }
//     else{
//         printf("Even number!");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if (((num >> 1) << 1) == num) {
//         printf("%d is even.\n", num);
//     } else {
//         printf("%d is odd.\n", num);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if ((num / 2) * 2 == num) {
//         printf("%d is even.\n", num);
//     } else {
//         printf("%d is odd.\n", num);
//     }
//     return 0;
// }