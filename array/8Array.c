/*now we delete an element from an array*/
/*date = 15/2/24*/
#include<stdio.h>
int main(){
    int arr[20],n,pos;
    printf("enter number of element = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("number [%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("array before delete = \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    //deletion operations 

    printf("enter position of element = ");
    scanf("%d",&pos);
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i+1];

    }
    n-=1;
    printf("\nafter deletion = \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
  return 0;
}