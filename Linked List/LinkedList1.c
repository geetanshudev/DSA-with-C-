#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int main(){
    //create 3 node
    struct node* head = (int*)malloc(sizeof(struct node));
    struct node* second = (int*)malloc(sizeof(struct node));
    struct node* third = (int*)malloc(sizeof(struct node));
    struct node* fourth = (int*)malloc(sizeof(struct node));

    //assign data to each node
    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    //linked variable together
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    //traversal each elements 
    struct node* current = head;
    while (current != NULL)
    {
        printf("%d-",current->data);
        current = current->next;
    }

    free(head);
    free(second);
    free(third);
    free(fourth);
    
  return 0;
}