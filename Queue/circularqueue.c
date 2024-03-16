/*
Date = 14/3/24
In this program i have create circular queue in which last element pointed towards front
*/

#include<stdio.h>
#include<stdlib.h>

#define N 5 //array stores only 5 elents
int queue[N];
int front = -1;
int rear = -1;

//function for enqueue
void enqueue(){
    int item;
    
    printf("Enter your item = ");
    scanf("%d",&item);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else if ((rear+1)%N == N-1)
    {
        printf("Overflow Conditions\n");
    }else
    {
        rear = (rear+1)%N;
        queue[rear] = item;
    }
}

void dequeue(){
    if (front == -1 && rear == -1)
    {
        printf("Underflow Conditions\n");
    }else if (front==rear)
    {
        front = rear = -1;
    }else
    {
        front = (front+1)%N;
    }
    
}

void display(){
    int i;
    i = front;

    if (front ==-1 && rear == -1)
    {
        printf("Underflow Conditions.");
    }
    else
    {
       printf("Queue =>");
       do
       {
        printf("%d->",queue[i]);
        i = (i+1)%N;
       } while (i != rear);
       printf("%d.",queue[i]);
    }
}

void peek(){
    if (front == -1 && rear == -1)
    {
        printf("Underflow Conditions.");
    }else
    {
        printf("Top element = %d",queue[front]);
    }
    
    
}
int main(){
    int choice;
    while (choice != 6)
    {
        printf("\nMain Menu\n");
        printf("1 Enqueue\n2 Dequeue\n3 Display\n4 Peek\n5 Exit\n");
        printf("Enter your choice = ");
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