/*
Date = 4/3/24
In this program i have insert element in circular linklist in front , at end and at given position 
of circular linked list 
*/
#include<stdio.h>
#include<stdlib.h>

//structure of circular linked link node
struct node
{
    int data;
    struct node *next;
};

struct node *tail;

//function operations

void create(){
    struct node *newnode;
    int items;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter element = ");
    scanf("%d",&newnode->data); //newnode have data
    newnode->next = NULL; //next pointer of new node become null

    if (tail == NULL)
    {
        tail = newnode;  //assign newnode to tail
        tail->next = newnode;  //head pointed to itself
    }else
    {
        newnode->next = tail->next;  //last node's next point to head pointer
        tail->next = newnode; // connecting one node to other
        tail = newnode; //assignin new node to tail
    }
    
    
}

void display(){
    struct node *temp = tail;

    if (tail == NULL)
    {
        printf("ERROR : Empty list");
    }
    else{

        
        temp = tail->next;
        printf("Circular List = ");
        do
        {
            printf("%d->",temp->data);
            temp = temp->next;

        } while (temp != tail->next);
        
    }
    
}
//count number of list data
int count(){
    int count = 0;
    struct node *temp = tail->next;
    
    while (temp != tail)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
//insertion function from begining

void insertatbeg(){
    int item;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter item = ");
    scanf("%d",&item);

    newnode->data = item;
    newnode->next = NULL; //creation of new node with data and next is null

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }else{
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

//insert at the end of list
void insertatend(){
    int items;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Elements = ");
    scanf("%d",&items);
    newnode->data = items;

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }else
    {
        newnode->next = tail->next; //in newnode next pointer have head address
        tail->next = newnode; //now head pointer have address of newnode
        tail = newnode;  //then tail have new node
    }
}

//input enter at position 

void insertatpos(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int pos,i=1,l;
    printf("Enter position to enter number = ");
    scanf("%d",&pos);
    l = count();

    if (pos < 0 || pos > l)
    {
        printf("invalid positions\n");
    }else if(pos == 1)
    {
        insertatbeg();
    }else
    {
        int item;
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        struct node *temp;
        printf("Enter Element = ");
        scanf("%d",&item);
        newnode->data = item;
        newnode->next = NULL;
        temp = tail->next;
        while (i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        



    }
    
    
    

}

void counts(){
    int f = count();
    printf("Number of elements are = %d",f);
}

int main(){
    int choice;
    while (choice != 9)
    {
        printf("\n========================================================\n");
        printf("Main Menu for Insertion Operation ");
        printf("\n========================================================\n");
        printf("\n1 Create list\n2 Display list\n3 Insert at begining\n4 Insert at end\n5 Insert at Position\n6 Number of Elements\n7 Exit\n");
        printf("\n========================================================\n");
        printf("Enter your Choice = ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertatbeg();
            break;
        case 4:
            insertatend();
            break;
        case 5:
            insertatpos();
            break;

        case 6:
            counts();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Error : Enter valid options");
            break;
        }
    }
    
    return 0;
}
