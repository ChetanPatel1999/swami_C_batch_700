#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;

    strcpy(p1.name, "cello");
    p1.price = 5;
    p1.rating = 3.4;

    printf("size of struct pen :%d \n", sizeof(p1));
    printf("pen1 info :\n");
    printf("name : %s\n", p1.name);
    printf("price : %d\n", p1.price);
    printf("rating : %.1f\n", p1.rating);
}