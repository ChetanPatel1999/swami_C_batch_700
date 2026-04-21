// club mini project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 12
    if (age >= 18)
    {
        printf("welcome to my club : \n");
        printf("club menu : \n");
        printf("1. pasta : 150\n");
        printf("2. paneer tika : 280\n");
        printf("3. sandwitch : 100\n");
        printf("choose any item : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your pasta is orderd please pay 150 rs\n");
        }
        else if (order == 2)
        {
            printf("your paneer tika is orderd please pay 280 rs\n");
        }
        else if (order == 3)
        {
            printf("your sandwitch is orderd please pay 100 rs\n");
        }
        else
        {
            printf("please enter 1 to 3");
        }
    }
    else
    {
        printf("you are not adult plase try after %d year ", 18 - age);
    }
}