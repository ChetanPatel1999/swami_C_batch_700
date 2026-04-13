// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char first_later;
    printf("enter frist later of your friend name : ");
    scanf("%c", &first_later); // t
    if (first_later >= 'A' && first_later <= 'Z')
    {
        first_later = first_later + 32;
    }
    switch (first_later)
    {
    case 'p':
        printf("prohit sharma");
        break;
    case 'n':
        printf("namrata singh");
        break;
    case 'l':
        printf("laksh rathore");
        break;
    case 'a':
        printf("ayush yadav");
        break;
    case 's':
        printf("shila yadav");
        break;
    default:
        printf("friends name not exist with start %c", first_later);
    }
}