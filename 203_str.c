// strupr() :- its convert string in uppercase string
#include <stdio.h>
void main()
{
    char st[20];
    printf("enter string : ");
    gets(st); // ravi
    printf("string : %s\n", st);
    strupr(st);
    printf("upper string : %s\n", st); // RAVI
}