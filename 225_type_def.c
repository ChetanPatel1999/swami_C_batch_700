// typedef :-  its used to change name of data type temparary in program.
#include <stdio.h>
struct student_of_10th_class_section_A
{
    int rno;
    float per;
};
typedef int i;
typedef char c;
typedef struct student_of_10th_class_section_A s10A;
void main()
{
    i a;
    c ch;
    s10A s1;
    printf("size of int : %d\n", sizeof(a));
    printf("size of char : %d\n", sizeof(ch));
    printf("size of struct : %d\n", sizeof(s1));
}