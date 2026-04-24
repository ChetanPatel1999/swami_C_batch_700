// Write a program to display number between given range.
#include <stdio.h>
void main()
{
    int i, s, e;
    printf("enter starting range : ");
    scanf("%d", &s);
    printf("enter ending range : ");
    scanf("%d", &e);

    for (i = s; i <= e; i++) // 6
    {
        printf("%d ", i);
    }
}