/*
Date = 14/3/24
in this program i have create queue with Linked List
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

//functions for enqueue 
void enqueue(){
    int item;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter elements = ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
        
    }else
    {
        rear->next = newnode;
        rear = newnode;
    }
    
    
}

void dequeue(){
    struct node *temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("\nUnderflow conditions\n");
    }else
    {
        printf("%d Data has been dequeue.",front->data);
        front = front->next;
        free(temp);
    }
}

//to display all elements from queue
void display(){
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("\nUnderflow conditions\n");
    }else
    {
        printf("\n--------------------------------------------\n");
        printf("Queue => ");
        while (temp!=NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("\n--------------------------------------------\n");
        
    }
    
    
}

void peek(){
    if (front == NULL && rear == NULL)
    {
        printf("\nUnderflow conditions\n");
    }else
    {
        printf("Top data is = %d",front->data);
    }
    
    
}
int main(){
    int choice;
    while (choice != 6)
    {
        printf("\n===================================================\n");
        printf("Main Menu\n");
        printf("1 Enqueue\n2 Dequeue\n3 Display\n4 Peek\n5 Exit\n");
        printf("=====================================================\n");
        printf("Enter Your choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
    
}
