#include <stdio.h>
void table()
{
    int num, i;
    printf("enter a num : ");
    scanf("%d", &num); // 5
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }
}
void main()
{
    table();
}