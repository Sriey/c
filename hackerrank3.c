
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float  a,b;
    int c,d;
    scanf("%d%d",&c,&d);
    scanf("%f%f",&a,&b);
    int sumint= c+d;
    int difint= c-d;
    float sumfloat= a+b;
    float diffloat= a-b;
    printf("%d %d\n",sumint,difint);
    printf("%0.1f %0.1f ", sumfloat,diffloat);
    
    return 0;
}