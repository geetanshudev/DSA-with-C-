/*
date = 14/3/24
in this program i have create a program of queue with implementations of linkedlist
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

//function of queue operations 

void enqueue(){
    int item;
    printf("Enter your element = ");
    scanf("%d",&item);
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
        rear->next = front;
    }else
    {
        rear->next=newnode;
        rear = newnode;
        rear->next = front;
    }
    
    
}

//function of dequeue
void dequeue(){
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("UNDERFLOW\n");
    }else if (front == rear)
    {
        front = rear = NULL;
        free(temp);
    }
    
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
    
    
}

void display(){
    struct node *temp;
    temp = front;

    if (front == NULL && rear == NULL)
    {
         printf("UNDERFLOW\n");
    }else
    {
        while (temp->next != front)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }printf("%d.",temp->data);
        
    }
    
    
}

void peek(){
    if (front == NULL && rear == NULL)
    {
         printf("UNDERFLOW\n");
    }else{
        printf("Top data = %d",front->data);
    }
}

int main(){
    int choice;
    while (choice != 6)
    {
        printf("\nMain Menu\n");
        printf("1 Enqueue\n2 Dequeue\n3 Display\n4 Peek\n5 Exit\n");
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
    return 0 ;
}
