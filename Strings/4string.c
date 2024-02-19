/*date = 19/2/24
now we count length of strings using while loop
*/

#include<stdio.h>
int main(){
    char str[10];
    int count,i = 0;
    printf("enter your string = ");
    gets(str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("length of stringe is = %d",i);
    
  return 0;
}