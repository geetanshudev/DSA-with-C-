/*date = 20/2/24
in this we have to concatenate two strings in one string 
in other word we have to append one string to another string
*/

#include<stdio.h>
#define max 50
int main(){
    char str1[max],str2[max];
    int i=0;
    int j=0;
    printf("enter string1 = ");
    fgets(str1,max,stdin);
    printf("enter string 2 = ");
    fgets(str2,max,stdin);
    while (str1[i] != '\0')
    {i++;}

    while (str2[j] !='\0')
        {
            str1[i] = str2[j];
            i++;
            j++;
            
        }
    str1[i] = '\0';
    printf("concatenate word is = ");
    puts(str1);
    
  return 0;
}