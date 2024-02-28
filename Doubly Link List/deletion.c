/*Date = 27/2/24
in this prograam we have see deletion in 
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head,*tail;
void create();
void show();
void deletefrombeg();
void deletefromend();

int main(){
    int num;
    while (num != 6)
    {
        printf("Main Menu\n");
        printf("Choose any one of them:-\n");
        printf("1 Create list\n2Delete from begining\n3Delete from end\n4Show List\n5Exit\n");
        printf("Enter your Choice = ");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            create();
            break;
            
        case 2:
            deletefrombeg();
            break;
            
        case 3:
            deletefromend();
            break;
            
        case 4:
            show(head);
            break;
        case 5:
            exit(0);
            
        default:
            printf("please enter valid options");
            break;
        }
    }
  return 0 ;  
}

void create(){
    int item;
    printf("enter elements = ");
    scanf("%d",&item);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("\nOverflowed\n");
    }else
    {
        if (head == NULL)
        {
            newnode->next = NULL;
            newnode->prev = NULL;
            newnode->data = item;
            head = newnode;
        }else
        {
            struct node *temp = head;
            while (temp ->next != NULL)
            {
                temp = temp->next;
            }
            
            newnode->next = NULL;
            newnode->prev = temp;
            newnode->data = item;
            temp->next = newnode;
            
        }
        
        
    }
    
    
}

void show(struct node *head){
    struct node *link = head;
    printf("\n--------------------------------------------\n");
    printf("List = ");
    while (link != NULL)
    {
        printf("%d->",link->data);
        link = link->next;
    }
    printf("\n--------------------------------------------\n");
    
}

void deletefrombeg(){
    struct node *temp;
    if (head == NULL)
    {
        printf("ERROR = Empty list enter some elements.");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        printf("\n %d is deleted.\n",temp->data);
        free(temp);
        
    }
    
    
}

void deletefromend(){
    struct node* temp = head;
    if (head == NULL)
    {
        printf("ERROR = Empty list enter some elements.");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->prev->next=NULL;
        printf("\n%d is deleted.\n",temp->data);
        free(temp);
        
    }
    
    
    
    
}