// wap to check voter is eligibel for voring or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age); // 45
    if (age >= 18)
    {
        printf("you can vote");
    }
    else
    {
        printf("you can not vote");
    }
}