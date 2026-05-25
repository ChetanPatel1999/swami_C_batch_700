//wap to display each charcter of string like belove style.
// input --> indore
// output -->  i-n-d-o-r-e-

#include <stdio.h>
void main()
{
    char name[] = "indore";
    int i;
    printf("string = %s\n", name);

    for (i = 0; name[i] != '\0'; i++) // 3
    {
        printf("%c-", name[i]);
    }
}