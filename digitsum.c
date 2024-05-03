#include<stdio.h>
#include<math.h>

void main()
{
    int n,sum=0,x ,i;
printf("enter the number");
scanf("%d",&n);
while (n>0)

{
    x=n%10;
    sum=sum+x;
    n=n/10;

}
printf("the sum of the number is %d",sum);


}