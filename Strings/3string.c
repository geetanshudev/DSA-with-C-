/*
Date = 19/2/24
now we see that scanf not takes data after white space now we use another function called 
puts() and gets() in which gets() takes data from keyboard and puts() gives out string
it takes white space word eg. if we write data "hello world" which gives output "hello world"
*/

#include<stdio.h>
int main(){
    char str[60];
    printf("enter message = ");
    gets(str);
    puts(str);
  return 0;
}