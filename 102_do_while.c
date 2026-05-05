// . Keep asking for numbers until the user enters a multiple of 7, then stop.
#include <stdio.h>
void main()
{
    int num;

    do
    {
        printf("enter a num : ");
        scanf("%d", &num);
    } while (num % 7 != 0);

    printf("its multiple of 7 = %d", num);
}