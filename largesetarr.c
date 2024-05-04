#include<stdio.h>
void main()
{
    int a[10],i,n,j,temp;
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
    for ( i = 0; i < n-1; i++) 
    {
       for(j=0;j<n-i-1;j++){
        if (a[j]>a[j+1])
        {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
        }
       }
    }
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\nThe sorted array is printed above.\n");
}
