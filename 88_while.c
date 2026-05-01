// . Write a program that takes a number and a single digit as input, and checks
// whether the digit exists in the given number or not.
#include <stdio.h>
void main()
{
    int rem, num, digit, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 372745
    printf("enter a single digit : ");
    scanf("%d", &digit); // 7
    while (num > 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            c++;
        }
        num = num / 10;
    }
    printf("total digit count : %d", c);
}