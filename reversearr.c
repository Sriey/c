#include<stdio.h>
void main()
{
    int a[10],i,n,temp;
    printf("Enter the no. of elements in array (less than 10 entries): ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("The array entered is: ");
     for ( i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
    
    for ( i = 0; i < n/2; i++)
    {
       temp = a[i];
       a[i] = a[n-i-1];
       a[n-i-1] = temp;
    }
    printf("The reversed array is: ");
    for ( i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\nThe reversed array is printed above.\n");
}
