#include<stdio.h>
int main()
{
    int a[10],i,n,count=0,key,pos;
    printf("enter the key number");
    scanf("%d",&key);
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
    for (i = 0; i < n; i++)
    {
        if(a[i]==key)
        {
            count++;
            
        } 
        
    }
 
     printf("no of key %d",count);
}
    
