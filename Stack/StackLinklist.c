/*
Date = 9/3/24
In this program we create a stack with linkedlist and perform all
operation on time complex of O(1)
*/

#include<stdio.h>
#include<stdlib.h>

//first we have to create a structure of a node
struct node
{
    int data; //it stores data
    struct node *link; //it links to the next node
};
struct node *top = NULL;

//push operations 
void push(){
    int item;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter item = ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->link = top;
    top = newnode;
    
}
//pop operation 
void pop(){
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Underflow\n");
    }else
    {
        printf("poped data = %d",top->data);
        top = top->link;
        free(temp);
    }
    
    
}

//display operations 
void display(){
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Underflow\n");
    }else
    {
        while (temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->link;
        }
        
    }
    
    
}

//peek operations 
void peek(){
    if (top == NULL)
    {
        printf("Underflow\n");
    }else
    {
        printf("Top data = %d",top->data);
    }
    
    
}
int main(){
    int choice;
    while (choice != 6)
    {
        printf("\nMain Menu\n");
        printf("1 Push\n2 Pop\n3 Display\n4 Peek\n5 Exit\n");
        printf("Enter your choice = ");
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
            printf("\nEnter Valid Choice\n");
            break;
        }
    }
    
}
