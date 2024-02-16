/*Array Insertion with its position*/
#include<stdio.h>

int main(){
    int n,arr[10],i,pos,ele;
    printf("enter number of elements = ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("enter number [%d] = ",i+1);
        scanf("%d",&arr[i]);
    }

    //traversing 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    //inserting an element 
    printf("\nenter element = ");
    scanf("%d",&ele);
    printf("enter positon = ");
    scanf("%d",&pos);

    for (int i = n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = ele;
    n+=1;

    //updated array 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
  return 0;
}