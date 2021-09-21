#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

newNode(int data)
{
    struct node* node = (struct node*) malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}

void Post_Order(struct node* node)
{
    if (node == NULL)
        return;

    Post_Order(node->left);
    Post_Order(node->right);
    printf("%d ", node->data);
}

void In_Order(struct node* node)
{
    if (node == NULL)
        return;

    In_Order(node->left);
    printf("%d ", node->data);
    In_Order(node->right);
}

void Pre_Order(struct node* node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);
    Pre_Order(node->left);
    Pre_Order(node->right);
}

int main()
{
    struct node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    printf("\nPreorder traversal of binary tree is: \n");
    Pre_Order(root);

    printf("\nInorder traversal of binary tree is: \n");
    In_Order(root);

    printf("\nPostorder traversal of binary tree is: \n");
    Post_Order(root);

    return 0;

}
