/*
date=15/2/24
now in this program we take n number of elements in array and then we create in digits
for eg we take 4,3,2 so we convert it to =>400+30+2 = 432  
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int arr[50],n,digit = 0;
    int* ptr;
    printf("enter number of digits = ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter number[%d]=",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    //now we begin our operations 
    int i=0;
    while (i<n)
    {
        digit = digit+arr[i]*pow(10,i);
        i++;
    }
    
    printf("\n\nNumber = %d",digit);
    
    
    return 0;
}