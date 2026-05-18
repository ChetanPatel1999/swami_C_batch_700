// Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int arr[5], arrCopy[5];
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

    // copy one array element in another array
    for (i = 0; i < 5; i++) // 0
    {
        arrCopy[i] = arr[i];
    }

    printf("\ncopy array element are : \n");
    for (i = 0; i < 5; i++) // i=3
    {
        printf("%d  ", arrCopy[i]);
    }
}