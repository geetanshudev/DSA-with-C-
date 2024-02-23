/*in this program we have to insert elements from begining of linklist */
#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

void display(struct node* head){
    struct node* link = head;
    while (link != NULL){
        printf("%d-",link->data);
        link = link->next;
    }
}
int main(){
    struct node *head,*first, *second ,*newnode;
    head = (struct node*) malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    newnode = (struct node*)malloc(sizeof(struct node));
    
    //initializing data in each node

    head->data = 10;
    first->data = 20;
    second->data = 30;

    //intialize next pointer

    head->next = first;
    first->next = second;
    second->next = NULL;

    //now we traverse it before insertion 
    display(head);
    

    //now we insert data infront of list

    newnode->data = 51; //data 
    newnode->next = head;
    head = newnode;

    //now we again traverse it 
    printf("\n linklist after insertion = \n");
    display(head);
    
  return 0;
}

