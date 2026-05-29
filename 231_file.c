// how to write dat inside file.
// fprintf(file_location , "data"):-  its used to write data inside file
#include <stdio.h>
void main()
{
    FILE *f;

    // file open
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\hello.txt", "w");

    // write data inside file
    fprintf(f, "this is indore city\n");
    fprintf(f, "and i am a teacher\n");

    // close file
    fclose(f);
}