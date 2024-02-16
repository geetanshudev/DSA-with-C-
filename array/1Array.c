/*
In this program i create a program of array in which it uses structure pointers 
it usues dynamically assigned data to array .
date = 14-02-24 
*/
#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *arr[60];
};

int main(){
    struct array *ptr;
    int num;
    printf("enter number of elements = ");
    scanf("%d",&num);
    ptr = (int*)malloc(num*sizeof(int));
    if (ptr == NULL)
    {
        printf("no memeory is assigned.");  
        
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter number %d = ",i+1);
        //scanf("%d",&(ptr+i)->arr);
        scanf("%d",&(ptr->arr[i]));
    }

    printf("\n\nOutput data = ");
    for (int i = 0; i < num; i++)
    {
        printf("%d,",ptr->arr[i]);
    }
    free(ptr);
  return 0;
}