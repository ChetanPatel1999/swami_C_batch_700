// Write a program to find sum of individuals digits of any three digits
// number.
#include <stdio.h>
void main()
{
    int num, r, s, t, sum;
    printf("enter a num : ");
    scanf("%d", &num); //678
    r = num / 100;
    s = (num / 10) % 10;
    t = num % 10;
    sum = r + s + t;
    printf("sum of individula digit : %d", sum);
}