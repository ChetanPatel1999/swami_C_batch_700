#include <stdio.h>
void main()
{
    int age, order, p, total = 0, c1 = 0, c2 = 0, c3 = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 12
    if (age >= 18)
    {
        printf("welcome to my club : \n");
        do
        {
            printf("club menu : \n");
            printf("1. pasta : 150\n");
            printf("2. paneer tika : 200\n");
            printf("3. sandwitch : 100\n");
            printf("choose any item : ");
            scanf("%d", &order);
            if (order == 1)
            {
                printf("\nyour pasta is orderd \n");
                total = total + 150;
                c1++;
            }
            else if (order == 2)
            {
                printf("\nyour paneer tika is orderd \n");
                total = total + 200;
                c2++;
            }
            else if (order == 3)
            {
                printf("\nyour sandwitch is orderd \n");
                total = total + 100;
                c3++;
            }
            else
            {
                printf("\nplease enter 1 to 3\n");
            }

            printf("\nyour orders :- \n");
            printf("pasta = %d\n", c1);
            printf("paneer tika = %d\n", c2);
            printf("sandwitch  = %d\n", c3);

            printf("\npress 1 for order more item : ");
            scanf("%d", &p);

        } while (p == 1);

        printf("\n\n<-----------------sir/mem your bill-------------------->\n");
        printf("<------------------------------------------------------>\n");
        printf("   item           price          quantity         total\n");
        printf("   pasta           150             %d               %d\n", c1, c1 * 150);
        printf("   paneer tika     200             %d               %d\n", c2, c2 * 200);
        printf("   sandwitch       100             %d               %d\n", c3, c3 * 100);
        printf("<------------------------------------------------------>\n");
        printf("                total bill : %d\n", total);
        printf("<------------------------------------------------------>\n\n\n");
    }
    else
    {
        printf("you are not adult plase try after %d year ", 18 - age);
    }
}