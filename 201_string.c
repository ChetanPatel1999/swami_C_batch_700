// strlen() :- its return string length
#include <stdio.h>
#include <string.h>
void main()
{
    char st[20];
    printf("enter string : ");
    gets(st);
    printf("string = %s\n", st);
    int len = strlen(st);
    // int len = strlen("ram");
    printf("string length : %d", len);
}