// write a program to print 10 to 1 reverse number
#include <stdio.h>
void fun()
{
    static int i = 10;
    printf("%d\n", i);
    i--;
    if (i >= 1)
    {
        fun();
    }
}
void main()
{
    fun();
}