// Write a program to take 2 numbers from user and find out the distance between them. (How to 
// compute distance: If number is 10 and 18 then 10 in binary 1010 and 18 in binary is 10010 and 
// distance is 2 means total number of bits that needs to be changed when 10 is converted into 18 
// or 18 is converted into 10, do not convert the number into binary)

#include <stdio.h>

int main()
{
    int a, b, xorResult, count = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    xorResult = a ^ b;

    while (xorResult != 0)
    {
        count += xorResult & 1; 
        xorResult >>= 1;       
    }

    printf("Distance between %d and %d is %d\n", a, b, count);

    return 0;
}