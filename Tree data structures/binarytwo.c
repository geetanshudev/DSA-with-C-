/*
in this program we create a BST in which we search,insert and delete an element
our tree look like 
   11
   /\
  5 16
  /\ \
 1 7  22

 inorder = 1->5->7->11->16->22

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node *create();
struct node* delete(struct node* root, int keyss);
struct node *inorderSucc(struct node*root);
void main(){
    int key;
    int key2;
    int key3;
    struct node *root;

    //tree creations 
    root = create();
    //display of tree
    printf("\nInorder data = ");
    inorder(root);

    //search elemnts in trees 
    printf("\nenter key to search = ");
    scanf("%d",&key);
    
    struct node* n = search(root,key);
    if (n!= NULL)
    {
        printf("Found : %d",n->data);
    }else
    {
        printf("Not founded\n");
    }

    //insertion in tree
    printf("\nEnter an element in tree = ");
    scanf("%d",&key2);
    insert(root,key2);
    printf("\nInorder data = ");
    inorder(root);

    //deletions in tree
    printf("\nEnter element to delete = "); 
    scanf("%d",&key3);
    root = delete(root,key3);
    printf("\nInorder data = ");
    inorder(root);

}

struct node *create(){
    struct node *newnode;
    int data;
    int choice;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n-----------Main Menu----------------\n");
    printf("select 0 for exit and 1 for enter data = ");
    scanf("%d",&choice);
    printf("\n");

    if (choice==0)
    {
        return 0;
    }else
    {
        
        printf("Enter data = ");
        scanf("%d",&data);
        newnode->data = data;
        printf("Enter Data for left childnode of %d",data);
        newnode->left = create();
        printf("Enter Data for right childnode of %d",data);
        newnode->right = create();
        return newnode;
    }
}

void inorder(struct node*root){
	if(root==NULL){
		return;
	}else{
		inorder(root->left);
		printf("%d-",root->data);
		inorder(root->right);
	}
}

search(struct node*root,int key){
    if (root==NULL)
    {
        return NULL;
    }
    else if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left,key);
    }
    else if (key > root->data)
    {
        return search(root->right,key);
    }
}

void insert(struct node*root,int keys){
    struct node*prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if (keys==root->data)
        {
            return;
        }
        else if (keys<root->data)
        {
            root=root->left;
        }else
        {
            root=root->right;
        }
    }

    struct node*new=create(keys);
    if (keys<prev->data)
    {
        prev->left = new;
    }else
    {
        prev->right = new;
    }
}

struct node *delete(struct node*root,int keyss){
    if (keyss<root->data)
    {
        root->left=delete(root->left,keyss);
    }
    else if (keyss>root->data)
    {
        root->right=delete(root->right,keyss);
    }else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(temp);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node*temp = root->left;
            free(temp);
            return temp;
        }
        struct node*temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = delete(root->right,temp->data);
        
    }
    return root;
}

struct node *inorderSucc(struct node*root){
    struct node* curr = root;
    while (curr && curr->left!= NULL)
    {
        curr = curr->left;
    }
    return curr;
}