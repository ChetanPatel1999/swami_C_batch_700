// gets() :- its used to take string from user
// puts():- its used to display string on terminal
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter string : ");

    gets(name);

    // printf("name = %s", name);
    printf("name = ");
    puts(name);
}