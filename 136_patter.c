#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) //4
    {
        for (j = 1; j <= 5; j++) // 3
        {
            printf("%d ", i);   
        }
        printf("\n");
    }
}