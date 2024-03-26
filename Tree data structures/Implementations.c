#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};
struct node *create();
void main(){
    struct node *root;
    root = create();
    printf("Preorder data =  ");
    preorder(root);
    printf("\nInorder data = ");
    inorder(root);
    printf("\nPostorder data = ");
    postorder(root);
   
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

void preorder(struct node *root){
	if(root==NULL){
		return;
	}else{
		printf("%d-",root->data);
		preorder(root->left);
		preorder(root->right);
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

void postorder(struct node*root){
	if(root==NULL){
		return;
	}else{
		postorder(root->left);
		postorder(root->right);
		printf("%d-",root->data);
	}
}


