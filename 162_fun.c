// with return type but no parameter
#include <stdio.h>
int add()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    return c;
}

int cube()
{
    int res, num;
    printf("enter num : ");
    scanf("%d", &num);
    res = num * num * num;
    return res;
}
void main()
{
    printf("addition = %d\n", add());
    printf("cube of num  : %d\n", cube());
}