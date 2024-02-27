/*in this program we have to create and traverse  a doubly linklist*/
#include<stdio.h>
#include<stdlib.h>


//now we create structure of doubly linklist
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void display(struct node *head){
    struct node *connect;
    connect = head;
    while (connect != NULL)
    {
        printf("%d->",connect->data);
        connect = connect->next;
    }
    
}
int main(){

    struct node *head,*first,*second;

    //memeory alocation
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));


    //now we have to initialize data to all head
    head->data = 12;
    first->data = 13;
    second->data = 14;

    //now we initialize prev pointer to all three node

    head->prev = NULL;
    first->prev = head;
    second->prev = first;

    //now we assing next pointer to all three node

    head->next = first;
    first->next = second;
    second->next = NULL;

    display(head);
    return 0;
}
