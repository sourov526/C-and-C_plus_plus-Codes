#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
// create a tree with no child
newNode(int data)
{
    struct node* node = (struct node*) malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}


// create a inorder function to traverse to inOrder sequence
void In_Order(struct node* node)
{
    if (node == NULL)
        return;

    In_Order(node->left);
    printf("%d ", node->data);
    In_Order(node->right);
}


int main()
{
    // insert node of this tree
    struct node* root = newNode(6);
    root->left = newNode(5);
    root->right = newNode(8);
    root->left->left = newNode(2);
    root->left->right = newNode(3);
    root->right->left = newNode(7);
    root->right->right = newNode(9);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(4);


    printf("\nInorder traversal of binary tree is: \n");
    In_Order(root);


    getchar();

}
