//example of constant variable
#include<stdio.h>
void main()
{
	 const int age=12;  // we cant change age value 
	 printf("age = %d\n",age);   //12
//	 age=90;  //show error
	 printf("age = %d\n",age);   // 12
	 
	 const float pi=3.141;
	 float r=5.6,area;
	 area= pi*r*r;
	 printf("area of circle : %.2f",area);
	 
	 
}
