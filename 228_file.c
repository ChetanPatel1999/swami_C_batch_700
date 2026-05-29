#include <stdio.h>
void main()
{
    int num, cube;
    printf("enter a num : ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("cube of %d = %d\n", num, cube);


    FILE *f;
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\cube.txt", "a");
    fprintf(f, "cube of %d = %d\n", num, cube);
    fclose(f);
}