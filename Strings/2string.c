/*
Date = 19/2/2024
in this program we see how to take string data through scanf() function
but there is limitations if string have whitespace then it doesnt take whitespace data
for eg. if we write "hello world" then it gives out only word "hello"
*/

#include<stdio.h>
int main(){
    char str[60];
    scanf("%s",str);
    printf("%s",str);
  return 0;
}