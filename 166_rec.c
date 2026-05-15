// write a program to print 1 to 30 even numbers using recursion.
#include <stdio.h>
void evenNum()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i); // 2  4
    }
    i++; // 4
    if (i <= 30)
    {
        evenNum();
    }
}
void main()
{
    evenNum();
}