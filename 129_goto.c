// wap to print 1 to 10 msg using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n);
lab:
    printf("%d * %d =  %d \n", n, i, n * i);
    i++;
    if (i <= 10)
    {
        goto lab;
    }
}