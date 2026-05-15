#include <stdio.h>
int sum_1_to_10()
{
    static int i = 1, sum = 0;
    sum = sum + i; // 55
    i++;           // 11
    if (i <= 5)
    {
        sum_1_to_10();
    }
    return sum;
}
void main()
{
    printf("sum = %d ", sum_1_to_10());
}