/*
date = 19/2/24
now we try to reverse entered string 
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[25];
    int i=0;
    printf("enter your message = ");
    gets(str);
    for ( i = strlen(str)-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    
    
  return 0;
}