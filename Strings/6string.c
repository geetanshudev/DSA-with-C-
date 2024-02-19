/*
date = 19/2/24
in this program we can count alphabet,digits and space and other special characters
*/
#include<stdio.h>
int main(){
    char str[25];
    int alph = 0,digit = 0,sc = 0,i = 0;
    printf("enter your message = ");
    gets(str);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <='z')|| (str[i]>='A' && str[i]<='Z'))
        {
            alph++;
        }else if (str[i]>='0'&& str[i]<='9')
        {
            digit++;
        }else
        {
            sc++;
        }
        i++;    
    }

    printf("number alphabet character = %d\n",alph);
    printf("number of digit characters = %d\n",digit);
    printf("number of special = %d\n",sc);
    
  return 0;
}