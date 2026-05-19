// Write a program to find and display only even element of a matrix.
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

    printf("matrix even element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            if (mat[i][j] % 2 == 0)
            {
                printf("%d ", mat[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}