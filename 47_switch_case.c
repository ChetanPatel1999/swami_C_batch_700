//  Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); //i

    switch(alpha == 'a' || alpha == 'i' || alpha == 'e' || alpha == 'o' || alpha == 'u')
    {
          case 1: printf("char is vovle");break; 
          case 0: printf("char is consonent");break; 
    }
}