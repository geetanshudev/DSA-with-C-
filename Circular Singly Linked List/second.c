#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp = head; // Initialize temp with head
    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head); // Check if temp is equal to head
}

int main()
{
    // Initialize 3 nodes
    struct node *head;
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    // Initialize data for all 3 nodes
    first->data = 12;
    second->data = 13;
    third->data = 14;

    // Initialize next pointers
    first->next = second;
    second->next = third;
    third->next = first; // Remember, this is a circular linked list

    // Set head to the first node
    head = first;

    // Display the circular linked list
    display(head);

    return 0;
}
