// wap to print 1 to 10 even number;
#include <stdio.h>
void main()
{
    int i = 1;
shiv:
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    i++; // 4
    if (i <= 10)
    {
        goto shiv;
    }
}