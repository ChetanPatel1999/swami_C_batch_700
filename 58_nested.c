// Write a Program to accept user’s marital status, gender and age to check if  he/she is eligible for marriage or not.
#include <stdio.h>
void main()
{
    int status, gender, age;
    printf("welcome shadi.come website ...\n");
    printf("1. single\n");
    printf("2. marride\n");
    printf("select option : ");
    scanf("%d", &status);
    if (status == 1)
    {
        printf("\n\nselect gender ..... \n");
        printf("1.male : \n");
        printf("2.Female : \n");
        printf("select : ");
        scanf("%d", &gender);
        if (gender == 1)
        {
            printf("\n\nok ! you select male ! \n");
            printf("ente your age : ");
            scanf("%d", &age);
            if (age >= 21)
            {
                printf("eligible for marrige");
                printf("\nand congrasulation for marrige !  ");
            }
            else
            {
                printf("not eligible for marrige");
            }
        }
        else if (gender == 2)
        {
            printf("\n\nok ! you select female ! \n");
            printf("ente your age : ");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("eligible for marrige");
                printf("\nand congrasulation for marrige !  ");
            }
            else
            {
                printf("not eligible for marrige");
            }
        }
        else
        {
            printf("invalid input");
        }
    }
    else if (status == 2)
    {
        printf("you all readdy marride");
    }
    else
    {
        printf("invalid input");
    }
}