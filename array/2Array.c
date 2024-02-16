/* Date = 14/2/24
now we start with basics of array in which first we traverse the array
we take from user size of array and then we take the units of data
and using dynamic memory allocation so that I have not waste my memory
for this we use malloc operation
then after that we find the mean of the entered data 
now we find minimum elements in array wit its position
we test it with input = 18,25,9,31,21,49, with number of elements is 6
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n ;
    printf("Enter number of elements = ");
    scanf("%d",&n);
    array(n);
  return 0;
}

int array(int a){
    int arr[50],*ptr = arr;
    int sum = 0;
    int min = ptr;
    int pos;
    int max = ptr;
    int posm;
    ptr = (int*)malloc(a * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("enter number %d = ",i+1);
        scanf("%d",ptr+i);       
    }
    printf("\nOutput\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d,",*(ptr+i));
        sum+= *(ptr+i);
        if (min>*(ptr+i))
        {
            min = *(ptr+i);
            pos = i;
        }     
        
    }
    printf("\ntotal sum = %d",sum);
    float avg = sum/a;
    printf("\nMean value = %5.3f",avg);
    printf("\n Minimum elements = %d",min);
    printf(" in position of = %d",pos);
    
    free(ptr);
    
    

}