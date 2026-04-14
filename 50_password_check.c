// . Write a program to accept username and password and verify login values.
#include <stdio.h>
void main()
{
    int pass;
    char user;
    printf("<--- welcome instagram page ---->\n");
    printf("first create account ....\n");
    printf("set username = ");
    scanf("%c", &user); // p
    printf("set password  = ");
    scanf("%d", &pass);

    printf("\naccount create succefully \n\n");
    printf("----------------------------------\n\n");
    printf("<---now welcome to log in page : --->\n");
    char u;
    int p;
    printf("enter user name : ");
    scanf(" %c", &u);
    printf("enter user pass word : ");
    scanf("%d", &p);

    if(user==u && pass==p)
    {
        printf("log in succefully !");
    }
    else{
        printf("incorrect password or username !");
    }


}