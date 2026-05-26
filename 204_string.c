// strlwr() :- its convert string in lower case string
#include <stdio.h>
void main()
{
    char st[20];
    printf("enter string : ");
    gets(st); // ravi
    printf("string : %s\n", st);
    strlwr(st);
    printf("lower string : %s\n", st); // RAVI
}