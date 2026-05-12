#include <stdio.h>
void main()
{
    int i, j;
    for (i = 97; i <= 101; i++) // 65
    {
        for (j = 97; j <= 101; j++) // 6
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}