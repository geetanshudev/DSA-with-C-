/*in this program we have insert element in front and at the end of link list*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail;

void create();
void insertatfront();
void show();
void insertatend();

int main(){
    int choice = 0;

    while (choice!=5)
    {
        printf("-------------------------Main Menu---------------------------------\n");
        printf("Choose any one options:-\n");
        
        printf("1 for enter elements\n2 Insert element in front\n3 Show List\n4 Insert element at end\n5 Exit");
        printf("\nEnter your choice = \n");
        printf("-------------------------------------------------------------------\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insertatfront();
            break;
        case 3:
            show(head);
            break;
        case 4:
            insertatend();
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}

void create(){
    int input;
    printf("enter elements = ");
    scanf("%d",&input);
    struct node *newnode = (struct node*)malloc(sizeof(struct node));;
    
    if (newnode == NULL)
    {
        printf("OVERFLOWED");

    }else
    {
        if (head == NULL)
        {
            newnode->data = input;
            newnode->prev = NULL;
            newnode->next = NULL;
            head = newnode;
        }else
        {
            struct node *temp = head;
            while (temp->next!=NULL)
            {
                temp = temp->next;
            }
            newnode->next = NULL;
            newnode->prev = temp;
            newnode->data = input;
            temp->next = newnode;
            
        }
        
        
    }
    
    
    
}

void insertatfront(){
    int input;
    printf("enter element = ");
    scanf("%d",&input);
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = input;
    newnode->prev = NULL;
    newnode->next = NULL;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    
}

void insertatend(){
    /*
    int input;
    printf("enter element = ");
    scanf("%d",&input);
    struct node *newnode,*tail;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = input;
    newnode->next = NULL;
    newnode->prev = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    */
   create();
}

void show(struct node *head){
    struct node *link = head;
    printf("--------------------------------------\n");
    printf("Your List = ");
    while (link != NULL)
    {
        printf("%d->",link->data);
        link = link->next;
    }
    printf("\n--------------------------------------");
    printf("\n");
    
}
