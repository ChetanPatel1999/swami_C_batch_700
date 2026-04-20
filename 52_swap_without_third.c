//  Write a program to swap any two numbers without using third
// variable.

#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a); // 12
    printf("enter b : ");
    scanf("%d", &b); // 5

    printf("before swapping values : \n");
    printf("a = %d\n", a); // 12
    printf("b = %d\n", b); // 5

    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = a * b;
    b = a / b;
    a = a / b;

    printf("after swapping values : \n");
    printf("a = %d\n", a); // 12
    printf("b = %d\n", b); // 5
}