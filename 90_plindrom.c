// . Write a program that takes a number as input and checks whether it is a
// palindrome or not. (A number is a palindrome if it reads the same forward
// and backward.)
#include <stdio.h>
void main()
{
    int rem, num, reverse = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 313
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;               //
        reverse = reverse * 10 + rem; // 32
        num = num / 10;               //
    }

    if (reverse == temp)
    {
        printf("num is palindrom");
    }
    else
    {
        printf("num is not palindrom");
    }
}