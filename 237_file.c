// read all character from file using  while loop
#include <stdio.h>
void main()
{
    char ch;
    FILE *f;
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\student.txt", "r");

    while (1)
    {
        ch = fgetc(f);
        if (ch == -1)
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(f);
}