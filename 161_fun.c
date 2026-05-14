// with return type , with parameter
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int cube(int num)
{
    int res;
    res = num * num * num;
    return res;
}

int greaterNumber(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void main()
{

    printf("gretest num  : %d\n", greaterNumber(40, 89));
    printf("gretest num  : %d\n", greaterNumber(400, 89));

    // int ans = cube(3);

    // printf("cube = %d\n", ans);

    // printf("cube = %d \n", cube(4));

    // int res = add(12, 7);
    // printf("addition = %d\n", res);

    // printf("addition = %d\n", add(10, 25));

    // printf("addition = %d\n", add(4, 9));
}