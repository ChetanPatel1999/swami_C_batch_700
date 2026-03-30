// wap to check voter is eligible for voting or not if voter age is given in input.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age); // 26
    age>=18 ? printf("you can vote") : printf("you can not vote");
}