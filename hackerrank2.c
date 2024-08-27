#include <stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    char s[100];
    char sentence[100];

    
    scanf("%c", &ch);
    //finds string till it encounters white space
    scanf("%s", s);
  scanf("\n"); 
    scanf("%[^\n]%*c", sentence);
    /*In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.*/
    printf("%c\n", ch);
   printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}
