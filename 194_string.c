//visit string all charactre using for loop and null character 
#include <stdio.h>
void main()
{
    char name[] = "my name is ram sharma";
    int i;
    for (i = 0; name[i] != '\0'; i++) // 3
    {
        printf("%c\n", name[i]);
    }
}