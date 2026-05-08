// wap to print 1 to 10 msg using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
lab1:
    printf("%d\n", i);
    i++; // 11
    if (i <= 10)
    {
        goto lab1;
    }
    goto lab2;
    printf("stmn1\n");
    printf("stmn2\n");
    printf("stmn3\n");
lab2:
    printf("after lab 2");
}