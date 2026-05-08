//wap to print 5 times msg using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
    start:
    printf("hello students\n");
    i++;//3
    if (i <= 5)
    {
        goto start;
    }
}