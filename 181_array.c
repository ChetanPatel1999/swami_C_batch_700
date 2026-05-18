//  . Write a program to display the array elements in reverse order.
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

    printf("\narray element in reverse order are : \n");
    for (i = 4; i >= 0; i--) // 0
    {
        printf("%d  ", arr[i]);
    }
}