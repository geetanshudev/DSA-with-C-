/*
Date = 2/3/24
In this program i have create a circular singly link list with function of create and 
display the link list with display functions and then we can exit from loop

logic of create function =>
in this first we take a structure if node 
and then we take a pointer called tail which traverse when we enter data in list
because in circular link list we should not maintain about head pointer so we have to 
maintain about tail pointer because tail's next pointer always contains head 
pointer address so we take only tail pointer for assigning next node.

logic of display =>
first we check if tail is empty then it prints message "empty list"
else we use do-while loop in which we take temp node and pointed to tail's next pointer
beacuse it contains head pointer now we generate a loop till temp is not equal to 
tail->next it will print all data that present in list.

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *tail = NULL;



void create(){
    struct node *newnode;
    int item;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Elements = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

void display(){
    struct node *temp = tail;
    if (tail == NULL)
    {
        printf("emptylist");
    }else
    {
        temp = tail->next;
        printf("\n========================================\n");
        printf("Circular list = ");
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;
        } while (temp != tail->next);
        printf("\n========================================\n");
        
    }
    
    
}

int main(){
    int choice;
    while (choice != 4)
    {
        printf("Main Menu\n");
        printf("\n1 Create\n2 Display\n3 Exit\n");
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
            printf("\nEnter valid options\n");
            break;
        }
    }
    
    return 0; 
}
