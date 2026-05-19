// Write a program to count total even and odd elements in a matrix.
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

    int ec = 0, oc = 0;
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            if (mat[i][j] % 2 == 0)
            {
                ec++;
            }
            else
            {
                oc++;
            }
        }
    }

    printf("total even count = %d\n", ec);
    printf("total odd count = %d\n", oc);
}