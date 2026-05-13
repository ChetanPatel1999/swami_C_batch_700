#include <stdio.h>
void addition()  //function defination
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
void subtraction()  //function defination
{
    int a, b, c;
    printf("this is subtraction fun ...\n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}
void main()
{
    printf("main fun is start .... \n");
    addition();  //function calling
    printf("hello...\n");
    addition();
    printf("main fun is end");
}