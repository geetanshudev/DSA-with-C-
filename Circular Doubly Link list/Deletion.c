/*
date = 6/3/24
In this program i make deletion operation in circular doubly linked list 
*/

#include<stdio.h>
#include<stdlib.h>

//structure of node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head,*tail;

//create function
void create(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int item;
    printf("Enter element = ");
    scanf("%d",&item);
    newnode->data = item;

    if (head == NULL)
    {
        head = tail = newnode;
        tail->next = head;
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

//display function

void display(){
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        printf("Circular list = ");
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;
        } while (temp != head);
        
    }
}

//delete from begining
void deletebeg(){
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("Empty list.\n");

    }
    else if (head->next == head)
    {
        head = tail = NULL;
        free(temp);
    }else
    {
        head = head->next;
        head->prev = tail;
        tail->next = head;
        free(temp);
    }
}

//delete from end function

void deleteend(){
    struct node *temp;
    temp = tail;
    if (head == NULL)
    {
        printf("Empty list\n");

    }
    /*else if (tail->next == head)
    {
        head = tail = NULL;
        free(temp);
    }*/
    else
    {
        struct node *newtail ;
        newtail = tail->prev;
        newtail->next = head;
        head->prev = newtail;
        free(temp);
    }
}
//counting the elements
int getlength(){
    int i;
    struct node *temp;
    temp = head;
    do
    {
        temp = temp->next;
        i++;
    } while (temp->next != head);
    return i;
    
}

void count(){
    int h;
    h = getlength();
    printf("Enter lenght of list = %d\n",h);
}
//delete from pos 
void deletepos(){
    struct node *temp;
    int pos,i=1,l;
    temp = head;
    l = getlength();
    
    printf("Enter position = ");
    scanf("%d",&pos);
    if (pos<1 || pos >l)
    {
        printf("Invalid Position\n");
    }else if (pos == 1)
    {
        deletebeg();
    }
    else
    {
        while (i<pos)
        {
            temp = temp->next;
            i++;

        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        if (temp->prev == head)
        {
            tail = tail->prev;
            free(temp);
        }else
        {
            free(temp);
        }
        
        
        
    }
    
}
int main(){
    int choice;
    while (choice != 9)
    {
        printf("\nMain Menu\n");
        printf("\n1 Create\n2 Display\n3 Delete from begins\n4 Delete from end\n5 Delete from pos\n6 Count\n7 Exit\n");
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
            deletebeg();
            break;
        case 4:
            deleteend();
            break;
        case 5:
            deletepos();
            break;
        case 6:
            count();
            break;
        case 7:
            exit(0);
            break;
        default:
            break;
        }
    }
    
    return 0;
}