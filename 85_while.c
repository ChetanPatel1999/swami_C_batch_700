// Write a program to takes a number as input and calculates the sum of its
// individual only even digits.
#include <stdio.h>
void main()
{
    int rem, num, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 38765
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            res = res + rem; // 14
        }
        num = num / 10;
    }
    printf("sum of individula even digit : %d", res);
}