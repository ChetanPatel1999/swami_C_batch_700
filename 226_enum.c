// enum :- enum is use to store integer constant value .
#include <stdio.h>
enum marks
{
    passigMarks = 33
};
void main()
{
    int mark = 20;
    if (passigMarks < mark)
    {
        printf("student pass");
    }
    else
    {
        printf("student fail");
    }
}