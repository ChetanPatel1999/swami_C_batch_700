// Write a program to find the sum of all elements in an array.
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
    printf("\nsum of array element : %d", sum);
}