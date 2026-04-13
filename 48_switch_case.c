//  Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); //i

    switch(alpha)
    {
        case 'a':printf("char is vovel");break; 
        case 'e':printf("char is vovel");break; 
        case 'i':printf("char is vovel");break; 
        case 'o':printf("char is vovel");break; 
        case 'u':printf("char is vovel");break; 
        default : printf("char is consonenet");
    }
}