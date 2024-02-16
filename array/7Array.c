/*Date = 16/2/24
now we insert an element in already sorted array*/
#include<stdio.h>
int main(){
    int arr[10] = {12,25,34,41,54,64};
    int ele;
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("enter new element = ");
    scanf("%d",&ele);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>ele)
        {
            for (int j = n-1; j>=i; j--)
            {
                arr[j+1] = arr[j];
            }
            arr[i] = ele;
            
        }
        n+=1;
        
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
  return 0;
}