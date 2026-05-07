#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++) // 13
    {
        if (i >= 8 && i <= 12)
        {
            continue;
        }
        printf("%d ", i);
    }
}