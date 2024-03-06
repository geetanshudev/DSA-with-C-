/*
Date = 1/3/24
Now in this program we have create and display with function of create() and display() 
I have using switch in we have gave 3 options of create,dispaly and exit
in which create takes data from users and display prints out data of list and exit ends the loop
now we start.

*/

#include<stdio.h>
#include<stdlib.h>

//now we create a structure of node
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

//create a list
void create(){
    int item;
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    printf("enter element = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        head = tail = newnode;
        tail->next = head;
    }else
    {
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
    
    
}
//display
void display(){
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");

    }else
    {
        printf("\n=======================================\n");
        printf("Circular List = ");
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("\n=======================================\n");
    }
    
    
}


int main(){
    int choice;
    while (choice != 4)
    {
        printf("Main Menu");
        printf("\n1 Create list\n2 Display List\n3 Exit\n");
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
            printf("Please enter valid options.");
            break;
        }
    }

    return 0 ;
    
}
