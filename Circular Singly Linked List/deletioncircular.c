/*
Date = 4/3/24
In this program we have perform 3 different deletion of element in circular linked list
i.e from begining,from ending,from given positions and creation and display
we are using 7 different functions create() , display() , deletebeg() , deleteend(), deletepos() , count() , exit(0)
let's begin
*/

#include<stdio.h>
#include<stdlib.h>

//structure of node
struct node
{
    int data;
    struct node *next;
};
struct node *tail;


//create functon
void create(){
    int item;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter element = ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->next = NULL;

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }else
    {
        
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    
    
}

//display functions 

void display(){
    struct node *temp = tail;
    if (tail == NULL)
    {
        printf("EMPTY LIST ENTER SOME VALUE\n");
    }else
    {
            printf("Circular linked list = ");
            temp = tail->next;
            do
            {
                printf("%d->",temp->data);
                temp = temp->next;
            } while (temp != tail->next);
    }
    
}

//delete from begining function 

void deletebeg(){
    struct node *temp;
    temp = tail->next;
    if (tail == NULL)
    {
        printf("EMPTY LIST ENTER SOME VALUE\n");
    }else if(temp->next == temp)
    {
        tail == NULL;
        printf("%d data has deleted\n",temp->data);
        free(temp);
    }else
    {
        tail->next = temp->next;
        printf("%d data has deleted\n",temp->data);
        free(temp);
    }
    
}

//delete from end of list
void deleteend(){
    struct node *temp,*prev;
    temp = tail->next;

    if (tail == NULL)
    {
        printf("EMPTY LIST ENTER SOME VALUE\n");
    }else if(temp->next == temp)
    {
        tail == NULL;
        printf("%d data has deleted\n",temp->data);
        free(temp);
    }else
    {
        while (temp->next != tail->next)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = tail->next;
        tail = prev;
        printf("%d data has deleted\n",temp->data);
        free(temp);
        
    }
}

//count function
int count(){
    int count = 0;
    struct node* temp = tail->next;
    while (temp != tail)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}

//deletion at specific position

void deletepos(){
    struct node *temp,*current;
    int pos,i=1,l;
    printf("Enter Position = ");
    scanf("%d",&pos);
    l = count();

    temp = tail->next;

    if (pos < 0 || pos > l)
    {
        printf("ERROR : INVALID POSITION\n");
    }else if (pos == 1)
    {
        deletebeg();
    }else
    {
        while (i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        current = temp->next;
        current->next = temp->next;
        printf("%d data has deleted\n",temp->data);
        free(temp);
        
    }
    
    
    

}

//counts functions 
void counts(){
    int num;
    num = count();
    printf("number of element in list = %d\n",num);
}
int main(){

    int choice;
    while (choice != 8)
    {

        printf("\n=======================================================\n");
        printf("Main Menu of deletion operations");
        printf("\n=======================================================\n");
        printf("\n1 Create\n2 Dispaly List\n3 Delete From Begining\n4 Delete From end\n5 Delete in position\n6 Number of Elements\n7 Exit\n");
        printf("\n=======================================================\n");
        printf("Enter Your Choice = ");
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
            deletebeg();
            break;
        case 4:
            deleteend();
            break;
        case 5:
            deletepos();
            break;
        case 6:
            counts();
            break;
        case 7:
            exit(0);
            break;
        
        default:
            printf("Enter Valid Options\n");
            break;
        }
    }
    
    return 0;
}
