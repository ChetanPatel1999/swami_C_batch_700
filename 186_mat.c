#include <stdio.h>
void main()
{
    int mat[3][2] = {{12, 45}, {77, 89}, {33, 77}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}