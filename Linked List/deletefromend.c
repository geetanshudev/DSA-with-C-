/*now in this code we have to delete node from the back of list*/
#include<stdio.h>
#include<stdlib.h>

//structure of node
struct node
{
    int data;
    struct node *next;
};

//diplay function to show all data int list
void display(struct node *head){
    struct node *link;
    link = head;
    printf("\nlist = ");
    while (link != NULL)
    {
        printf("%d-",link->data);
        link = link->next;
    }
    
}

//now we have to count number of node in list
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

    struct node *head,*first,*second,*third,*temp,*prevnode;
    head = (struct node*)malloc(sizeof(struct node*));
    first = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));

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

    //now we delete from end of list 
    temp = head;
    while (temp->next !=NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = NULL;
        
    }else
    {
        prevnode->next = NULL;
    }
    free(temp);

    display(head);
    count(head);
    
    
    return 0;
}