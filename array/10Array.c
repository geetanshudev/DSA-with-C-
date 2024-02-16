/*
Date = 16/2/24
now we have to merge two array taking 3 arrays 
in first and second array we store our array 
then we store it into 3rd array 
*/

#include<stdio.h>
int main(){
    int a1,a2,a3,arr1[10],arr2[10],arr3[20],index;
    printf("enter size of first array = ");
    scanf("%d",&a1);
    printf("enter in first array = \n");
    for (int i = 0; i < a1; i++)
    {
        printf("number[%d] = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nenter in second array = \n");
    printf("enter size of second array = ");
    scanf("%d",&a2);
    for (int i = 0; i < a2; i++)
    {
        printf("number[%d] = ",i);
        scanf("%d",&arr2[i]);
    }
    a3 = a1+a2;
    for (int i = 0; i < a1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for (int i = 0; i < a2; i++)
    {
        arr3[index] = arr2[i];
        index++;
    }
    printf("\nfinal output is = \n");
    for (int i = 0; i < a3; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    
    
    
  return 0;
}