//  Write a program to find sum of array elements & check sum is even or odd.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("enter array elements : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // 0 1 2 3 4
    // 2 5 6 3 8
    int sum = 0;
    for (i = 0; i < 5; i++) // 5
    {
        sum = sum + arr[i]; // 24
    }
    printf("\nsum of array element : %d\n", sum);

    if (sum % 2 == 0)
    {
        printf("sum is even");
    }
    else
    {
        printf("sum is odd");
    }
}