#include <stdio.h>
void main()
{
    char name[20];
    int rno;
    float per;
    printf("enter name : ");
    gets(name);
    printf("enter rno : ");
    scanf("%d", &rno);
    printf("enter per :");
    scanf("%f", &per);

    printf("%s %d %.2f", name, rno, per);

    FILE *f;
    f = fopen("C:\\Users\\PC\\Desktop\\ravi\\student.txt", "a");
    fprintf(f, "%s %d %.2f\n", name, rno, per);
    fclose(f);
}