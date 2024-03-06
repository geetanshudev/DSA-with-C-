/*
Date = 6/3/24
In this progra we have create a complete operation of Circular Singly Linklist in which 
we create, display, insert element (from begining and end) and delete element (from begining and end)

*/

#include<stdio.h>
#include<stdlib.h>

//structure of node 
struct node
{
    int data;
    struct node *next;
};
struct node *tail;

//functions 
void create(){
    struct node *newnode;
    int items;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter element = ");
    scanf("%d",&newnode->data); //newnode have data
    newnode->next = NULL; //next pointer of new node become null

    if (tail == NULL)
    {
        tail = newnode;  //assign newnode to tail
        tail->next = newnode;  //head pointed to itself
    }else
    {
        newnode->next = tail->next;  //last node's next point to head pointer
        tail->next = newnode; // connecting one node to other
        tail = newnode; //assignin new node to tail
    }
    
    
}

void display(){
    struct node *temp = tail;

    if (tail == NULL)
    {
        printf("ERROR : Empty list");
    }
    else{

        
        temp = tail->next;
        printf("Circular List = ");
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;

        } while (temp != tail->next);
        
    }
    
}


void insertbeg(){
    int item;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter item = ");
    scanf("%d",&item);

    newnode->data = item;
    newnode->next = NULL; //creation of new node with data and next is null

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }else{
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

void insertend(){
    int items;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Elements = ");
    scanf("%d",&items);
    newnode->data = items;

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }else
    {
        newnode->next = tail->next; //in newnode next pointer have head address
        tail->next = newnode; //now head pointer have address of newnode
        tail = newnode;  //then tail have new node
    }
}

void deletebeg(){
    struct node *temp;
    temp = tail->next;
    if (tail == NULL)
    {
        printf("EMPTY LIST ENTER SOME VALUE\n");
    }else if(temp->next == temp)
    {
        tail == NULL;
        printf("%d data has deleted\n",temp->data);
        free(temp);
    }else
    {
        tail->next = temp->next;
        printf("%d data has deleted\n",temp->data);
        free(temp);
    }
    
}

void deleteend(){
    struct node *temp,*prev;
    temp = tail->next;

    if (tail == NULL)
    {
        printf("EMPTY LIST ENTER SOME VALUE\n");
    }else if(temp->next == temp)
    {
        tail == NULL;
        printf("%d data has deleted\n",temp->data);
        free(temp);
    }else
    {
        while (temp->next != tail->next)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = tail->next;
        tail = prev;
        printf("%d data has deleted\n",temp->data);
        free(temp);
        
    }
}

int main(){
    int choice;
    while (choice != 10)
    {
        printf("\n========================================================\n");
        printf("Main Menu for Operations in Circular Link list ");
        printf("\n========================================================\n");
        printf("\n1 Create List\n2 Display List\n3 Insert at Begin\n4 Insert at End\n5 Delete begin\n6 Delete Last\n7 Exit\n");
        printf("\n========================================================\n");
        printf("Enter your Choice = ");
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
            insertbeg();
            break;
        case 4:
            insertend();
            break;
        case 5:
            deletebeg();
            break;
        case 6:
            deleteend();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("ERROR : Please Enter valid input.");
            break;
        }
    }
    
    return 0;
}