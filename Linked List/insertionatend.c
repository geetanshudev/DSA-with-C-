/*now we insert node at end of link list*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void display(struct node* head){
    struct node* link = head;
    while (link != NULL)
    {
        printf("%d - ",link->data);
        link = link->next;
    }
    
}

void count(struct node* head){
    int count = 0;
    struct node* temp;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("\nNumber of Nodes are = %d",count);
}

int main(){
    struct node *head,*first,*second,*newnode;
    head = (struct node*)malloc(sizeof(struct node*));
    first = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    newnode = (struct node*)malloc(sizeof(struct node*));

    //intialize data to node from user
    int a,b,c;
    printf("enter data for first node = ");
    scanf("%d",&head->data);
    printf("enter data for second node = ");
    scanf("%d",&first->data);
    printf("enter data for third node = ");
    scanf("%d",&second->data);
    

    //intialize to netxt pointer
    head->next = first;
    first->next = second;
    second->next = NULL;

    //traversing before new node data;
    count(head);
    printf("\nlinklist = ");
    display(head);

    //now we insert data at the end of linklist 
    struct node* temp;
    printf("\nenter data for new node = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    //now we traverse again
    count(head);
    printf("\nlinklist after insertion at end = ");
    display(head);
    
    return 0;
}