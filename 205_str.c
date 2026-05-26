// strcat() :-  its combine two strings and store in one variable
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[20], st2[20];
    printf("enter st1 : ");
    gets(st1); // ram

    printf("enter st2 : ");
    gets(st2); // patel

    printf("st1 = %s\n", st1); // ram
    printf("st2 = %s\n", st2); // patel

    strcat(st1, " ");
    strcat(st1, st2);

    printf("st1 = %s\n", st1); // ram patel
    printf("st2 = %s\n", st2); // patle
}