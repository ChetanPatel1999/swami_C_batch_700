// how to read data from file
//  fscanf() :- its used to read data from file.
#include <stdio.h>
void main()
{
    char data[30];
    FILE *f;
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\cube.txt", "r");

    fscanf(f, "%s", data);
    printf("%s ", data);

    fscanf(f, "%s", data);
    printf("%s ", data);

    fscanf(f, "%s", data);
    printf("%s ", data);

    fclose(f);
}
