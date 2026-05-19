// Write a program to find the sum of all elements in a matrix.
#include <stdio.h>
void main()
{
    int mat[3][3];
    int i, j;

    printf("enter matrix element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // sum of all matrix element
    int sum = 0;
    for (i = 0; i < 3; i++) // 1
    {
        for (j = 0; j < 3; j++) // 3
        {
            sum = sum + mat[i][j]; // 10
        }
    }

    printf("\nsum of matrix element : %d", sum);
}