// . Write a program to add two matrices and display the result.
#include <stdio.h>
void main()
{
    int mat1[3][3], mat2[3][3], matsum[3][3];
    int i, j;

    printf("enter matrix1 element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("enter matrix2 element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("matrix1 element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("matrix2 element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // sum of two matrix and assign ans in third matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) // 1
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("sum matrix element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", matsum[i][j]);
        }
        printf("\n");
    }
}