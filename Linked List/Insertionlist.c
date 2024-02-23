/*
date = 23/2/24
in this program we see how to insert element from front and back both side
*/

#include<stdio.h>
#include <stdlib.h>
//structure of node 
struct node{
    int data;
    struct node* next;
};
//traversing and display all elements in list
void display(struct node* head){
    struct node* link = head;
    printf("\nlist = ");
    while (link != NULL){
        printf("%d-",link->data);
        link = link->next;
    }
}

//counting number of node in list
void count(struct node* head){
    int count;
    struct node* temp;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("\nNumber of node = %d",count);
}

int main(){
    struct node *head,*first,*second,*third,*temp,*prevnode,*newnode,*newnode2;
    head = (struct node*)malloc(sizeof(struct node*));
    first = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode2 = (struct node*)malloc(sizeof(struct node*));

    //initialize data to node
    head->data = 10;
    first->data = 20;
    second->data = 21;
    third->data = 32;

    //initialize pointer to node
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    //now we traverse it 
    display(head);
    count(head);

    //now we insert data infront of list

    newnode->data = 51; //data 
    newnode->next = head;
    head = newnode;

    display(head);
    count(head);

    //now we insert at the end of list
    newnode2->data = 61;
    newnode2->next = NULL;
    temp = head;
    while (temp->next!=NULL)
    {
    temp = temp->next;
    }

    temp->next=newnode2;

    display(head);
    count(head);
    




    return 0;
}