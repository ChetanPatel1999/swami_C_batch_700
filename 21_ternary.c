// write a program to take two number from user and check they
// are same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    a == b ? printf("num is same") : printf("num is different");
}