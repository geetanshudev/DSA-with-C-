/*
date = 6/3/24
in this we have see insertion operation in circular doubly linklist 
from begining and at the end of the list we create 4 functions create(),display(),insertbeg(),insertend() 
*/

#include<stdio.h>
#include<stdlib.h>


//structure 
struct node
{
    struct node *prev;
    struct node *next;
    int data;
} *head,*tail;


//create functions 
void create(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int item;
    printf("Enter element = ");
    scanf("%d",&item);
    newnode->data = item;

    if (head == NULL)
    {
        head = tail = newnode;
        head->prev = head;
        head->prev = head;
    }else
    {
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = head;
        head->prev = newnode;
        tail=newnode;
    }
    
    

}

//insert in front 
void insertbeg(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int item;
    printf("Enter element = ");
    scanf("%d",&item);
    newnode->data = item;

    if (head == NULL)
    {
        head = tail = newnode;
        head->prev = head;
        head->prev = head;
    }else
    {
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }
    
}

//insert at end 
void insertend(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int item;
    printf("Enter element = ");
    scanf("%d",&item);
    newnode->data = item;

    if (head == NULL)
    {
        head = tail = newnode;
        head->prev = head;
        head->prev = head;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
    
}

int getlength(){
    struct node *temp;
    temp = head;
    int i;
    do
    {
        temp = temp->next;
        i++;
    } while (temp->next != head);
    return i ;
    
}
//insert at positions

void insertpos(){
    struct node *newnode,*temp;
    temp = head;
    newnode = (struct node*)malloc(sizeof(struct node));
    int pos,i=1,l;
    l = getlength();
    printf("Enter position = ");
    scanf("%d",&pos);
    if (pos<1 || pos > l)
    {
        printf("Invalid position");
    }else if (pos == 1)
    {
        insertbeg();
    }else{
        int item;
        printf("Enter Element = ");
        scanf("%d",&item);

        newnode->data = item;
        while (i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        temp->next->prev = newnode;
        
    }
    
    
}

//display function
void display(){
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("Empty List.");
    }else
    {
        printf("Circular List = ");
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;
        } while (temp != head);
        
    }
    
    
}

//count
void count(){
    int h;
    h = getlength();
    printf("Number of elements = %d\n",h);
}
int main(){
    int choice;
    while (choice != 9)
    {
        printf("\nMain Menu\n");
        printf("\n1 Create\n2 Display\n3 Insert at begining\n4 Insert at end\n5 Insert at position\n6 Count\n7 Exit\n");
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
            insertbeg();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertpos();
            break;
        case 6:
            count();
            break;

        case 7:
            exit(0);
            break;
        default:
            printf("\nINVALID INPUT ENTER VALID INPUT\n");
            break;
        }
    }
    
}