#include <stdio.h>
#include <string.h>
union pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    union pen p1, p2, p3;
    printf("size of struct pen :%d \n", sizeof(p1));

    strcpy(p1.name, "cello");
    printf("pen1 info :\n");
    printf("name : %s\n", p1.name);

    p1.price = 5;
    printf("price : %d\n", p1.price);

    p1.rating = 3.4;
    printf("rating : %.1f\n", p1.rating);
}