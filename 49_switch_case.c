//  Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); //s

    switch(alpha)
    {
        case 'a':; 
        case 'e':; 
        case 'i':; 
        case 'o':; 
        case 'u':printf("char is vovel");break; 
        default : printf("char is consonenet");
    }
}