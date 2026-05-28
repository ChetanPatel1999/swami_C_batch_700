#include <stdio.h>
void main()
{
    int a = 12;
    char ch; // 1 byte

    int arr[6];
    char b[10];

    printf("size of int =  %d\n", sizeof(a));
    printf("size of char =  %d\n", sizeof(ch));
    printf("size of array=  %d\n", sizeof(arr));
    printf("size of char array=  %d\n", sizeof(b));
}