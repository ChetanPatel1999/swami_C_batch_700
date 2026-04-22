// Check if a number is even-positive, even-nagative ,odd-positive ,odd
// nagative or zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("num is zero");
    }
    else if (num % 2 == 0)
    {
        if (num > 0)
        {
            printf("num is even-positive");
        }
        else
        {
            printf("num is even-nagative");
        }
    }
    else
    {
        if (num > 0)
        {
            printf("num is odd-positive");
        }
        else
        {
            printf("num is odd-nagative");
        }
    }
}