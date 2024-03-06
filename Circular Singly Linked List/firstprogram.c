/*
Date = 1/3/24
in this i write an introduction program of circular single linklist 
in which last node's next pointer pointed to the address of head pointer 
it means there is no null pointer in list 
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void display(struct node *head){
    struct node *temp = head;
    do
    {
        printf("%d->",temp->data);
        temp = temp->next;
    } while (temp != head);
    
}

void display1(){
    struct node *temp = head;
    printf("\n");
    while (temp->next != head)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("%d->",temp->data);
    
}
int main(){
    
    //intitial 3 node
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    //now intialize data to all 3 nodes

    first->data = 12;
    second->data = 13;
    third->data = 14;

    //now we have intialize next pointer;
    first->next = second;
    second->next = third;
    third->next = first; //remeber this is circular link list

    head = first;

    //now we have show it

    display(head);

    //now we again we have to print with different strategy
    display1();
    
    return 0;
}
