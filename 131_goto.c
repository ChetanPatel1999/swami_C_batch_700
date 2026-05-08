#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num;
    num = 18;
    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("num is even\n");
    exit(0);
odd:
    printf("num is odd\n");
}