// wap to print even number series .
#include <stdio.h>
void main()
{
    int i, n = 30;
    for (i = 1; i <= n; i++) // 6
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}