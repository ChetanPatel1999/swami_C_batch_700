#include<stdio.h>
void main()
{
	int a,b;
	a=12;
	b=5;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("----------\n");
	
//	  a+=b;
//    a-=b;
//    b+=b;
//    b+=a;

//	b+=20;
   
     a*=b;
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("----------\n");
}
