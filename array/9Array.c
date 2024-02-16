/*now we delete element by taking element values*/
/*date = 16/2/24*/
#include<stdio.h>
int main(){
    int arr[20],n,ele;
    printf("enter number of element = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("number [%d] = ",i);
        scanf("%d",&arr[i]);

    }
    printf("\n entered element = \n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n",i,arr[i]);
    }

    //deletion of element 
    printf("\nenter number to be deleted = ");
    scanf("%d",&ele);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j+1];
            }
            
        }
        /*
        else
        {
            printf("entered element is not there.");
        }
        */
        
        
    }
    n-=1;
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n",i,arr[i]);
    }
    
    
    
  return 0;
}