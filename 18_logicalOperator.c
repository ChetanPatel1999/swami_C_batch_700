#include<stdio.h>
void main()
{
	int res;
    //res= 12>7 && 9==9 && 4>9;

    //res= 12>77 || 4>9  || 4==3;
    //res=!(34>8);
    res= !( 34>7 && !(6==9));
	printf("res = %d",res);
}
