//  Write a program to display sum 1 to n only even number sum.
#include <stdio.h>
void main()
{
    int i, res = 0;
    int n;
    printf("enter a num : ");
    scanf("%d", &n); // 10

    for (i = 1; i <= n; i++) // 4
    {
        if (i % 2 == 0)
        {
            res = res + i; // 30
        }
    }
    printf("sum of 1 to num only even number : %d", res);
}