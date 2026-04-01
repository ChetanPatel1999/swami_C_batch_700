// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a); // 455
    printf("enter b: ");
    scanf("%d", &b); // 675
    if (a > b)
    {
        printf("gretest num = %d", a);
    }
    else
    {
        printf("gretest num = %d", b);
    }
}