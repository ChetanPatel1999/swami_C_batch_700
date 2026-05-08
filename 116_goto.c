#include <stdio.h>
void main()
{
    int i = 8;
    printf("hello students\n");

    if (i == 5)
    {
        goto lab;
    }
    printf("stmnt1 \n");
    printf("stmnt2 \n");
    printf("stmnt3 \n");
lab:
    printf("after lable ");
}