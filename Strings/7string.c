/* date = 20/2/24
in this program we create different writting string to screen*/
#include<stdio.h>
int main(){
    char country[] = "Chhattisgarh";
    
    printf("%15s\n",country);
    printf("\n------------------------\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%-12.*s\n",i+1,country);
    }
    printf("\n------------------------\n");
  return 0;
}