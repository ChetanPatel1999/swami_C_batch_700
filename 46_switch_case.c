// Write a program to check given number is even or odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //12
    switch(num%2==0)  
    {
      case 0 : printf("num is odd");break;
      case 1 : printf("num is even");break;
    }
}