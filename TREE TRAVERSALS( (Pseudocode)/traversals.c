#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left , *right;
}TREE;

// PREORDER TRAVERSAL <<<<----->>>>  (root--left--right) 

void preorder(TREE *root)
{
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

// INORDER TRAVERSAL <<<<---->>>> (left--root--right)

void inorder(TREE *root)
{
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

// POSTORDER TRAVERSAL <<<<---->>>> (left--right--root)

void postorder(TREE *root)
{
    inorder(root->left);
    inorder(root->right);
    printf("%d",root->data);
}
