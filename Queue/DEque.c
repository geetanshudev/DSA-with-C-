/*
date = 16/3/24
In this program i create DEque in which it has fouble ended 
which means it takes from fronts and end as well as it delete 
from front and end of queue
*/
#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

//funtions

void enqueuefront(){
    int item;
    printf("Enter Element = ");
    scanf("%d",&item);

    if ((front==0 && rear==N-1)||(front==rear+1))
    {
        //this will check that queue is fulland send message
        printf("QUEUE is Full.\n");
    }
    else if (front == -1 && rear==-1)
    {
        //this will check if queue is completely empty and enters first elements
        front=rear=0;
        queue[front] = item;
    }else if (front==0)
    {
        //to insert at rear
        front = N-1;
        queue[front] = item;
    }
    else
    {
        /*we know that in queue we have insert from last so in 
        above else if enters data in last now it enters data in last second position if last ele
        have been there.
        */
        front--;
        queue[front]=item;
    }
    
}

void enqueueend(){
    int item;
    printf("Enter Element = ");
    scanf("%d",&item);

    if ((front==0 && rear==N-1)||(front==rear+1))
    {
        //this will check that queue is fulland send message
        printf("QUEUE is Full.\n");
    }
    else if (front == -1 && rear==-1)
    {
        //this will check if queue is completely empty and enters first elements
        front=rear=0;
        queue[rear] = item;
    }
    else if (rear == N-1)
    {
        /*if rear pointed to last position then it change it into first positions*/
        rear = 0;
        queue[rear] = item;
    }
    else 
    {
        /*it enters data to next positions*/
        rear++;
        queue[rear]=item;
    }
    
    
}

void display(){
    int i=front;
    if (front==-1 && rear==-1)
    {
        printf("\nQueue is Empty.\n");
    }else
    {
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("DEque => ");
        while (i != rear)
        {
            printf("%d->",queue[i]);
            i = (i+1)%N; //for increment we use this for knowing this click 9 in choice
        }printf("%d->",queue[i]); //to print last element.
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }
    
    
}

void dequeuefront(){
    if (front==-1&&rear==-1)
    {
        printf("\nQUEUE is EMPTY.\n");
    }else if (front==rear)
    {
        /*in this if queue have only one data than it delete it*/
        printf("Front data = %d\n",queue[front]);
        front=rear=-1;

    }else if (front==N-1)
    {
        /*it delete last elements and pointed front to first positions*/
        front=0;
    }else
    {
        /*in this we just update front point to the next element*/
        front++;
    }
    
    
    
    
}

void dequeueend(){
    if (front==-1&&rear==-1)
    {
        printf("\nQUEUE is EMPTY.\n");
    }else if (front==rear)
    {
        /*in this if queue have only one data than it delete it*/
        printf("Front data = %d\n",queue[front]);
        front=rear=-1;
    }else if (rear==0)
    {
        /*if rear is pointed to 0 data then we update it to last element*/
        rear=N-1;
    }else
    {
        /*in this we update rear data to its previous */
        rear--;
    }
    
    
    
}

void frontdata(){
    if (front==-1&&rear==-1)
    {
        printf("\nQUEUE is EMPTY.\n");
    }else{
        printf("Front data = %d\n",queue[front]);
    }
   
} 

void reardata(){
    if (front==-1&&rear==-1)
    {
        printf("\nQUEUE is EMPTY.\n");
    }else{
        printf("Rear data = %d\n",queue[rear]);
    }
}

void message(){
    printf(".............\nThis program is made by geetanshu dev \n..........");
}
int main(){
    int choice;
    while (choice != 11)
    {
        printf("\n********Main Menu********\n");
        printf("1 Enqueue front\n2 Enqueue end\n3 Display Queue\n4 Dequeue front\n5 Dequeue end\n6 Front\n7 Rear\n8 Exit\n ");
        printf("********************************\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueuefront();
            break;
        case 2:
            enqueueend();
            break;
        case 3:
            display();
            break;
        case 4:
            dequeuefront();
            break;
        case 5:
            dequeueend();
            break;
        case 6:
            frontdata();
            break;
        case 7:
            reardata();
            break;
        case 8:
            exit(0);
            break;
        case 9:
            message();
            break;
        
        default:
            printf("\n Enter Valid Input\n");
            break;
        }

    }
   return 0; 
}