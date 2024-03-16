/*
Date 13-3-24
Queue implementation with array
*/

#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N] ; 
int front = -1;
int rear = -1;


//functions 

void enqueue(){
    int item;
    printf("Enter Your element = ");
    scanf("%d",&item);

    if (rear == N-1) //to check overflow conditions
    {
        printf("\nOverfrlow Conditions.\n");
    }
    else if (front ==-1 && rear == -1) //to insert first elements if queue is empty
    {
        front = rear = 0;
        queue[rear] = item;
    }
    
    else //if there elements already present then it insert at the rear of queue
    {
        rear++;
        queue[rear] = item;
    }
    
    
}

void dequeue(){
    if (front == -1 && rear == -1) //to check underflow condition
    {
        printf("\nUNDERFLOW CONDITION\n");
    }
    else if (front == rear) //if queue have only one elements
    {
        printf("\n=============================\n");
        printf("%d has been dequeued",queue[front]);
        front = rear = -1;
        printf("\n=============================\n");
    }
    else  //it delete from front 
    {
        printf("\n=============================\n");
        printf("%d has been dequeued",queue[front]);
        front++;
        printf("\n=============================\n");
    }
    
    
    
}

void display(){
    int i;
    if (front ==-1 && rear == -1)
    {
        printf("\nOVERFLOW CONDITION\n");
    }
    else
    {
        printf("\n=============================\n");
        for ( i = front; i < rear+1; i++)
        {
            printf("%d->",queue[i]);
        }
        printf("\n=============================\n");
    }
    
    
}

void peek(){
     if (front ==-1 && rear == -1)
    {
        printf("\nOVERFLOW CONDITION\n");
    }
    else
    {
        printf("Front data is = %d",queue[front]);
    }
    
}


int main(){
    int choice;
    while (choice != 6)
    {
        printf("\n=============================\n");
        printf("\nMain Menu of Queue Operation\n");
        printf("1 Enqueue\n2 Dequeue\n3 Display \n4  Peek\n5 Exit");
        printf("\n=============================\n");
        printf("\nEnter your number = ");
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
            printf("Please Enter valid choice.\n");
            break;
        }
    }
    return 0;
    
}

