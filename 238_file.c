// fputc()  :-  its used to write one char inside file
#include <stdio.h>
void main()
{

    FILE *f;
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\student.txt", "a");
    fputc('H', f);
    fclose(f);
}