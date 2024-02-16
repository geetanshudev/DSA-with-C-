/*it is an another program in which we create an array with structure we take size of 100 but 
using only 5 memmory */
#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int totalsize;
    int usedsize;
    int *ptr; //points towards first element
};



int main(){
    int ts,us;
    struct myarray number;
    create(&number,10,4);
    store(&number);
    show(&number);
  return 0;
}

void create(struct myarray *a,int b,int c){
    a->totalsize = b;
    a->usedsize = c;
    a->ptr = (int*)malloc(b*sizeof(int));
}

void store(struct myarray *a){
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("enter data %d = ",i+1);
        scanf("%d",(a->ptr)[i]);
    }
    
}

void show(struct myarray *a){
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("%d",(a->ptr)[i]);
    }
    
}