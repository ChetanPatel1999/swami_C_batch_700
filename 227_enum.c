// enum :- enum is use to store integer constant value .
#include <stdio.h>
enum days {mon=12,tue,wed,thu = 80,fri,sat,sun,a=10};
void main()
{
   printf("a = %d\n",a);
   printf("mon = %d\n",mon);
   printf("tue = %d\n",tue);
   printf("wed = %d\n",wed);
   printf("thu = %d\n",thu);
   printf("fri = %d\n",fri);
   printf("sat = %d\n",sat);
   printf("sun = %d\n",sun);
}