// wap to print 1 to 10 msg using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
shiv:
    printf("%d\n", i);
    i++;
    if (i <= 10)
    {
        goto shiv;
    }
}