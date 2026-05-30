// fgetc() :- its used to read one charcter from file.
#include <stdio.h>
void main()
{
    char ch;
    FILE *f;
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\cube.txt", "r");

    ch = fgetc(f);
    printf("%c", ch);

    ch = fgetc(f);
    printf("%c", ch);

    ch = fgetc(f);
    printf("%c", ch);

    fclose(f);
}