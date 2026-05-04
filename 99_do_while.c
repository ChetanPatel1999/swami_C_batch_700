#include <stdio.h>
void main()
{
    int sum = 0, mark, p;
    do
    {
        printf("enter marks : ");
        scanf("%d", &mark);
        sum = sum + mark;
        printf("you want to have more studend press 1 :");
        scanf("%d", &p);
    } while (p == 1);

    printf("total marks sum = %d", sum);
}