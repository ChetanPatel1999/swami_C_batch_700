
#include <stdio.h>
void fun()
{
    static int i = 1;                  // its run one time in program
    printf("hello world institute\n"); // 5
    i++;                               // 6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}