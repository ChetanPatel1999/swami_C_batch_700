// no return type but with parameter
#include <stdio.h>
void add3(int a, int b, int d)
{
    int c;
    c = a + b + d;
    printf("addition : %d\n", c);
}
void add2(int a, int b)
{
    int c;
    c = a + b;
    printf("addition : %d\n", c);
}

void cube(int num)
{
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}

void table(int num)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }
}

void greaterNumber(int a, int b)
{
    if (a > b)
    {
        printf("greater num : %d", a);
    }
    else
    {
        printf("greater num : %d", b);
    }
}

void main()
{

    greaterNumber(5, 25);
    
    // table(6);

    // cube(4);
    // cube(2);
    // cube(3);
}