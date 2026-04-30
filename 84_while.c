// Write a program to takes a number as input and calculates the sum of its 
// individual digits.
#include <stdio.h>
void main()
{
    int rem, num, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 345
    while (num > 0)
    {
        rem = num % 10; 
        res = res + rem;//12
        num = num / 10; 
    }
    printf("sum of individula digit : %d", res);
}