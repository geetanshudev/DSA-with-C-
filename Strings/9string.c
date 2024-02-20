/*
Date = 20/2/24
in this program we have to convert lowercase to uppercase
in which we take character one by one with while loop thwn we check if character 
is fall in range of 'a' to 'z' then we subtract it to 32 which convert it into uppercase 
else the letter is capital as it is
*/
#include<stdio.h>
int main(){
    char str[100],upprstr[100];
    int i =0;
    printf("enter your message =");
    gets(str);
    while(str[i]!='\0')
    {
        if (str[i]>='a' && str[i<='z'])
        {
            upprstr[i] = str[i]-32;
        }
        else
        {
            upprstr[i] = str[i];

        }

        i++;
    }
    upprstr[i] = '\0';
    printf("\nYour message = ");
    puts(upprstr);
    
  return 0;
}