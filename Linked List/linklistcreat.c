/*in this program we have to create a link list and we traverse it */
#include<stdio.h>
#include<stdlib.h>
//create a struture of node
struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node*) malloc(sizeof(struct node*));
    second = (struct node*) malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));

    //intializes head node and pointed to next struct
    head->data = 10;
    head->next = second;

    //intializes second node with data and pointer to next structure
    second->data = 20;
    second->next = third;

    //intialize third node with data and pointed to the null pointer

    third->data = 30;
    third->next = NULL;


    //now we traverse the list 
    struct node* link = head;
    while (link != NULL)
    {
        printf("%d-",link->data);
        link = link->next;
    }
     
    return 0;
}
