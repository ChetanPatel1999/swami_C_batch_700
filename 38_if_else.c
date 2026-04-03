//  Write a program to check whether a character is an uppercase  so convert in lower
// case or lowercase so convert in uppercase char .
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch); // Q

    // if (ch >= 'a' && ch <= 'z')
    if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        printf("ch = %c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("ch = %c", ch);
    }
}