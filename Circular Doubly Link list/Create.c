/*
Date = 6/3/24
in this programm i have create and display circular doubly linked list 
node have three things data,next pointer,previous pointer in node there is no null pointer 
last node pointed to the head of link and previous node of head pointed to the last node 

*/

#include<stdio.h>
#include<stdlib.h>

//structure of node 
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head,*tail;

//create function

void create(){
    struct node  *newnode = (struct node*)malloc(sizeof(struct node));
    int item;
    
    printf("Enter element = ");
    scanf("%d",&item);
    newnode->data = item;
    
    if (head == NULL)
    {
        head = tail = newnode;
        head->next = head;
        head->prev = head;
    }else
    {
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
    
}

//display functions 

void display(){
    struct node *temp;
    temp = head;

    if (temp == NULL)
    {
        printf("EMPTY LIST.");
    }else
    {
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;
        } while (temp->next != head);
    }    
}

int main(){
    int choice;
    while (choice != 4)
    {
        printf("\n=================================================\n");
        printf("                   Main menu                     \n");
        printf("=================================================\n");
        printf("1 Create\n2 Display\n3 Exit\n");
        printf("=================================================\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            break;
        }
    }
    
    return 0;
}
