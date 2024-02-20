/*now we have to compare 2 string */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 0;
    int flag = 0;
    char str1[10];
    char str2[10];
    printf("enter string1 = ");
    gets(str1);
    printf("entring string2 = ");
    gets(str2);
    while (str1[i] == str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i+=1;
        if (str1[i]=='\0'&& str2[i]=='\0')
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            
        }
    }

    if (flag == 1)
    {
        printf("both string are equals.");
    }
    else
    {
        printf("both are not equal.");
    }
    
    
    return 0;
}