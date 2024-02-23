/*Date = 23/2/24
deletion operation in list*/
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
    struct node *head,*first,*second,*third,*prevnode,*temp,*temp2;
    head = (struct node*)malloc(sizeof(struct node*));
    first = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));
    prevnode = (struct node*)malloc(sizeof(struct node*));

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
    //deletion from front 
    
    temp = head;
    head = head->next;
    free(temp);

    display(head);
    count(head);

    //deletion from back of list
    temp2 = head;
    while (temp2->next !=NULL)
    {
        prevnode = temp2;
        temp2 = temp2->next;
    }
    if (temp2 == head)
    {
        head = NULL;
        
    }else
    {
        prevnode->next = NULL;
    }
    free(temp2);

    display(head);
    count(head);
    
    return 0;
}