// strrev() :- its convert string in reverse string
#include <stdio.h>
void main()
{
    char st[20];
    printf("enter string : ");
    gets(st); // ravi
    printf("string : %s\n", st);
    strrev(st);
    printf("reverse string : %s\n", st); // ivar
}