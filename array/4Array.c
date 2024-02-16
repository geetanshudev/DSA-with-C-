/*
date = 15/2/24
In this program I create a dynamic array in which it takes n number of array and check
duplicate elements in which we use nested loop to double check each elements
if it find the duplicate element then it gives its position or else it gives message of 
"no duplicate element found".
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int arr[50];
    int *ptr;
    ptr = arr;
    int n,flag = 0;
    printf("enter number of elements = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter number [%d] =", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
                printf("Duplicate elements found at %d aand %d", i, j);
                break;
            }
            
        }
    }
    if (flag == 0)
    {
        printf("no duplicate elements found.");
    }
    

    free(ptr);

    return 0;
}
