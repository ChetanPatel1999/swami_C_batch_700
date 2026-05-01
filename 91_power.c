//  Calculate power of a number without using pow().
#include <stdio.h>
void main()
{
    int n, p, ans=1, i;
    printf("enter a num : ");
    scanf("%d", &n);
    printf("enter a power : ");
    scanf("%d", &p);
    for (i = 1; i <= p; i++)
    {
        ans = ans * n;
    }
    printf("res = %d", ans);
}