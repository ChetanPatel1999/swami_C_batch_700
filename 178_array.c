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

    // logic for display only even number

    printf("\nonly even array element are : \n");
    for (i = 0; i < 5; i++) // i=3
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d  ", arr[i]);
        }
    }
}