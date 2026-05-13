#include <stdio.h>
void fun1()
{
    printf("hi i am fun1\n");
}
void fun2()
{
    printf("hi i am fun2\n");
    fun1();
}
void fun3()
{
    fun2();
    printf("hi i am fun3\n");
    fun2();
}
void main()
{
    printf("main fun is start...\n");
    fun3();
    printf("main fun is end");
}