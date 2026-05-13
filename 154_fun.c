#include <stdio.h>
void addition(); // function declaration
void main()
{
    addition(); //function calling
}
void addition() // function defination
{
    int a, b, c;
    printf("this is addition fun ...\n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
