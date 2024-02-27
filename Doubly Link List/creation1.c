/*now once again we create a doubly linklist */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

void create(){
    int item;
    printf("enter numbers = ");
    scanf("%d",&item);
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOverflow\n");
    }else
    {
        if (head == NULL )
        {
            printf("--if is running\n");
            ptr->data = item;
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }else
        {
            printf("--else is running\n");
            struct node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            
            ptr->next = NULL;
            ptr->prev = temp;
            ptr->data = item;
            
            temp->next = ptr;
        }
        printf("Node inserted\n");
    }
}

void display(struct node *head){
    printf("\nentered data is = ");
    struct node *link;
    link = head;
    while (link!=NULL)
    {
        printf("%d->",link->data);
        link = link->next;
        
    }
    
}
int main(){
    int num;
    printf("enter number of elemnets you want to enter = ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        create();
    }
    
    //create();
    display(head);
    return 0;
}
