#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please buy a bike for me ! \n");
        printf("press 1 if bike not purchesd : ");
        scanf("%d", &num); // 1

    } while (num == 1);
    printf("thanks papa for a bike !");
}