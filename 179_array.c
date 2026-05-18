//  Write a program to count how many even numbers are present in an array.
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

    int c = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c++;
        }
    }
    printf("\ntotal even numbers : %d", c);
}