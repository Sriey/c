#include <stdio.h>
#include <math.h>
void main()
{
    int n, x, r = 0;
    printf("enter the number\t");
    scanf("%d", &n);
    while (n > 0)
    {
        x = n % 10;
        r = r * 10 + x;
        n = n / 10;
    }
    printf("the reverse number is %d", r);
}
