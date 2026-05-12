#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 65
    {
        for (j = i; j <= 69; j++) // 6
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}