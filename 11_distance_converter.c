//Write a program to convert distance meter into km.
#include<stdio.h>
void main (   )
{
	float     meter    ,     km    ;
	printf   (     "enter distance in meter : "   )  ;
	scanf    (    "%f"    ,   &   meter  );
	km     =    meter    /     1000    ;
	printf   (    "distance in kelo meter : %.1f km"   ,   km   )  ;
}


