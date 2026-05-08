// wap to print 1 to 10 msg using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); //10
lab:
    sum = sum + i;
    i++;//3
    if (i <= 10)
    {
        goto lab;
    }
    printf("sum of 1 to n : %d", sum);
}