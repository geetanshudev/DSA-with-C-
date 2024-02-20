/*date = 20/2/24
in this program we have to capitalized only even words
*/

#include<stdio.h>
#define AND &&
int main(){
    char str[50],str2[50];
    int i = 0;
    printf("enter string = ");
    gets(str);
    //fgets(str,50,stdin);
    while (str[i] != '\0')
    {
        if (str[i]>='a' AND str[i]<='z')
        {
            if (i%2==0)
            {
               str2[i] = str[i] - 32; 
            }
            else
            {
                str2[i] = str[i];
            }
            
        }
        i++;
        
    }

    str2[i] = '\0';
    printf("your message = ");
    puts(str2);
    
  return 0;
}