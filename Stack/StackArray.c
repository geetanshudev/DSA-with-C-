/*
Date = 9/3/24
In this program we create a stack and perform basic operation like 
push(), pop(), display(),peek()
*/
#include<stdio.h>
#include<stdlib.h>

# define N 5
int stack[5];
int top = -1;
//now we write function for push in which it takes data
void push(){
    int item;
    printf("Enter number = ");
    scanf("%d",&item);
    if(top == N-1){
        printf("Overflow\n");
    }else
    {
        top++;
        stack[top] = item;
        printf("Element has been pushed\n");
    }
    
}

//pop function that removes top elements
void pop(){
    int item;
    if (top == -1)
    {
        printf("Underflow\n");
    }else
    {
        item = stack[top];
        top--;
        printf("%d has been popped\n",item);
    }
    
    
}

//display function to show all the data elements in stack
void display(){
    int i;
    printf("Stack Elements = ");
    for ( i = top; i >= 0 ; i--)
    {
        printf("%d-",stack[i]);
    }
    
}

//peek function to show top element from stack
void peek(){
    if (top == -1)
    {
        printf("Underflow\n");
    }else
    {
        printf("Top elelemt = %d",stack[top]);
    }
    
    
}
int main(){
    
    int choice;
    while (choice != 6)
    {
        printf("\nMain Menu\n");
        printf("1 Push\n2 Pop\n3 Display\n4 Peek\n5 Exit\n");
        printf("Enter Your choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
    
    return 0 ;
}