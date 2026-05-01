//  Write a program that takes a number as input and displays its digits in 
// reverse order as a new number.
#include <stdio.h>
void main()
{
    int rem, num, reverse = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 23
    while (num > 0)
    {
        rem = num % 10;               //
        reverse = reverse * 10 + rem; // 32
        num = num / 10;               //
    }
    printf("reverse number :%d", reverse);
}