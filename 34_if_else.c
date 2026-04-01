//  Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); // a

    if (alpha == 'a' || alpha == 'i' || alpha == 'e' || alpha == 'o' || alpha == 'u')
    {
        printf("alpha is vovel");
    }
    else
    {
        printf("alpha is consonent");
    }
}