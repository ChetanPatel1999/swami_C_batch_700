// wap to count vovels in given string.
#include <stdio.h>
void main()
{
    char str[] = "hello raj sharma";

    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e')
        {
            c++;
        }
    }

    printf("total vovle count = %d", c);
}