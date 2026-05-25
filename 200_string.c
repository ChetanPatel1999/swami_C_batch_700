// fgets() :- its used to take string from user
// fputs():- its used to display string on terminal
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter string : ");

    fgets(name, 30, stdin);

    printf("name = ");
    fputs(name, stdout);
}