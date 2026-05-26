// strcpy() :-  its copy one variable string in another variable
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[20], st2[20];
    printf("enter st1 : ");
    gets(st1); // ram

    printf("st1 = %s\n", st1); // ram
    printf("st2 = %s\n", st2); //

    strcpy(st2, st1);

    printf("st1 = %s\n", st1); // ram
    printf("st2 = %s\n", st2); // ram
}