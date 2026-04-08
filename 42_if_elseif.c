// Write a program to find greatest number among has given three numbers.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);
    // 3490  806  78
    if (a > b && a > c)
    {
        printf("gretest num : %d", a);
    }
    else if (b > c)
    {
        printf("gretest num : %d", b);
    }
    else
    {
        printf("gretest num : %d", c);
    }
}