// Implement a following pattern 
// *  *  *  *  *  *  * 
//    *            *   
//      *       *     
//          *       
//      *       *     
//    *            *   
// *  *  *  *  *  *  *

#include <stdio.h>

int main()
{
    int n = 8;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == n - 1)          // First and last row
                printf("* ");
            else if(j == i || j == n - i - 1) // Diagonals
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}