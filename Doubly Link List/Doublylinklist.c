/*Date = 28/2/24
In this program i have erite a code having different operation in doubly linklist like 
creation , traversing , insertion , deletion , searching , etc.

*/

#include<stdio.h>
#include<stdlib.h>

//structure of node
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
//initialization of head
struct node *head ,*tail;

void create();
void show();
void insertatbeg();
void insertatend();
void deleteatbeg();
void deleteatend();
void search();

int main(){
    int choice;
    while (choice != 9)
    {
        printf("------------------------------------------------------------\n");
        printf("     Main Menu of  Doubly Link List Operations  \n");
        printf("------------------------------------------------------------\n");
        printf("Choose any one options :-\n");
        printf("1 Create a list\n2 Show list\n3 Insert element at begining\n4 Insert element at end\n5 Delete element from begining\n6 Delete element from the end\n7 Search an element in list\n8 Exit ");
        printf("\n------------------------------------------------------------\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            show(head);
            break;
        case 3:
            insertatbeg();
            break;
        case 4:
            insertatend();
            break;
        case 5:
            deleteatbeg();
            break;
        case 6:
            deleteatend();
            break;
        case 7:
            search();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid options\n");
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
        printf("OVERFLOWED\n");

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
        printf("%d is inserted\n",newnode->data);
    }
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

void insertatbeg(){
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
    printf("%d is inserted\n",newnode->data);
}

void insertatend(){
    create();
}

void deleteatbeg(){
    struct node *temp;
    if (head == NULL)
    {
        printf("\nERROR = Empty list enter some elements.\n");
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

void deleteatend(){
    struct node* temp = head;
    if (head == NULL)
    {
        printf("\nERROR = Empty list enter some elements.\n");
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

void search(){
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("enter item = ");
        scanf("%d",&item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("Element founded at %d\n",i+1);
                flag = 0;
                break;
            }else
            {
                flag = 1;
            }
            
            i++;
            ptr = ptr->next;
        }
        
    }
    if (flag == 1)
    {
        printf("\n %d not found in list\n",item);
    }
}