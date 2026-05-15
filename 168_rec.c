// write a program to print table using recursion.
#include <stdio.h>
void fun(int num)
{
    static int i = 1;
    printf("%d\n", num * i);
    i++; // 3
    if (i <= 10)
    {
        fun(num);
    }
}
void main()
{
    fun(12);
}