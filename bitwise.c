#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  int m1=0,m2=0,m3=0;
  for (int i; i<n; i++) {
      for(int j; j<n;j++)
      {
         int  a=i&j;
         int  x=i^j;
         int  o=i|j;
         if(a<k&&a>m1)
         {m1=a;}
         if (o<k&&o>m2)
         {m2=0;}
         if (x<k&&x>m3)
         { m3=x; }
         
  
    }
  printf("%d",m1);
  printf("%d",m2);  
  printf("%d",m3);  
   
  }
          
      }
  

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
