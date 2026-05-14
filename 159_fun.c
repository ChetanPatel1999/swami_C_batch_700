// no return type no parameter
#include <stdio.h>
void table()
{
    int num, i;
    printf("enter a num : ");
    scanf("%d", &num); // 5
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }
}
void addition()
{
    int a, b, c;
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition : %d\n", c);
}
void greaterNumber()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greater num : %d", a);
    }
    else
    {
        printf("greater num : %d", b);
    }
}
void cube()
{
    int num, res;
    printf("enter a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}
void main()
{
    cube();
}