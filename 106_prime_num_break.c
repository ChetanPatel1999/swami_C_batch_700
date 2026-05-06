#include <stdio.h>
void main()
{
    int num, c = 0, i;
    printf("enter a num : ");
    scanf("%d", &num);         // 15
    for (i = 1; i <= num; i++) // 3
    {
        if (num % i == 0)
        {
            c++; //3
        }
        if (c > 2)
        {
            break;
        }
    }
    if (c == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}