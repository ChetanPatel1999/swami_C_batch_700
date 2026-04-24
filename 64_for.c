// Write a program to display number 1 to n(given number) squares.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);         // 5
    for (i = 1; i <= n; i++) // 2
    {
        printf("sqaure of %d = %d \n", i, i * i);
    }
}