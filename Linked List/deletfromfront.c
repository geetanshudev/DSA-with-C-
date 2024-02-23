/*now in this program we have to delete a node from front of list */
#include<stdio.h>
#include<stdlib.h>

//structure of node
struct node{
    int data;
    struct node* next;
};

//display function
void display(struct node* head){
    struct node* link;
    link = head;
    printf("\nlist = ");
    while (link != NULL)
    {
        printf("%d-",link->data);
        link=link->next;
    }
    
}

//count number of node
void count(struct node* head){
    int count = 0;
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
    struct node *head,*first,*second,*third;
    head = (struct node*)malloc(sizeof(struct node*));
    first = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));

    //itialize data to node

    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;

    //initialize next pointer to node
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    //now we traverse and display
    display(head);
    count(head);

    //now we start operation of deleteing node from front

    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);

    //after that we have to check updated list

    display(head);
    count(head);
    return 0;
}