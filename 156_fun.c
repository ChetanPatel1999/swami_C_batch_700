#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("you choosed addition app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}
void subtraction()
{
    int a, b, c;
    printf("you choosed subtraction app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction : %d\n", c);
}
void multiplication()
{
    int a, b, c;
    printf("you choosed multiplication app : \n");
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication : %d\n", c);
}
void main()
{
    int num, a, b, c;
    printf("<---- welcome to my calculator ---->\n");
    printf("      Press 1 to addition  \n");
    printf("      Press 2 to subtraction  \n");
    printf("      Press 3 to multiplication  \n");
    printf("      Press 4 to division  \n");
    printf("      choose any option :  ");
    scanf("%d", &num); // 78

    switch (num)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        printf("you choosed division app : \n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a / b;
        printf("division : %d\n", c);
        break;
    default:
        printf("please choosed 1 to 4 number");
    }
}