// . Write a program to display table of given number.
// 5 * 1 = 1
// 5 * 2= 10
// 5 * 3= 15
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);          // 5
    for (i = 1; i <= 10; i++) // 3
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}