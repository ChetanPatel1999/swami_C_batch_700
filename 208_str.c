// strcmp() :-  its used to compare two strings are same or different.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[20], st2[20];
    printf("enter st1 : ");
    gets(st1); //

    printf("enter st2 : ");
    gets(st2); //

    if (strcmp(st1, st2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}