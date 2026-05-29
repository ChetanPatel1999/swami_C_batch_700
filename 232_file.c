// how to append data inside file
// "a" :- its not delete previus data , its only append new data
#include <stdio.h>
void main()
{
    FILE *f;


    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\hello.txt", "a");

   
    fprintf(f, "this is indore city\n");
    fprintf(f, "and i am a teacher\n");

 
    fclose(f);
}