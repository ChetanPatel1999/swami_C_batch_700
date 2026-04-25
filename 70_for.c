//  Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int i, res = 0;
    int n;
    printf("enter a num : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // 11
    {
        res = res + i; // 55
    }
    printf("sum of 1 to num : %d\n", res);
    printf("average of 1 to num : %.2f", res / (float)n);
}