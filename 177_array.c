// Write a program to find the average of array elements.
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

    printf("array element are : \n");
    for (i = 0; i < 5; i++) // i=3
    {
        printf("%d  ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++) // 5
    {
        sum = sum + arr[i]; // 24
    }

    printf("\naverage of array element = %.2f", sum / 5.0);
}