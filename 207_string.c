// strcpy() :-  its copy one variable string in another variable
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[20] = "raj";

    printf("st1 = %s\n", st1);

    // aftre one assign string value if we want to change so we used strcpy() function
    strcpy(st1, "ram");

    printf("st1 = %s\n", st1);
}