#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // 2
    {
        for (j = 1; j <= 4; j++) // 1 2 3 4
        {
            if (i % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}