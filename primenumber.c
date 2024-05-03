#include <stdio.h>
#include <math.h>

void main()
{
    int n, i, c=0;
    printf("enter the number to be checked");
    scanf("%d", &n);
    for (i = 1; i<= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}
