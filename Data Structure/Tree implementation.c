#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int newNode(int data)
{
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

Insert (struct node* node, int key)
{
    if (node == NULL)
    {
        return 0;

    }
    else if(key->node, key)
    {
        node->left = insert (node->left, key);
    }
    else if(key->node, key)
    {
        node->right = insert (node->right, key);
    }
    return node;
}
int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);

    Insert(node)

    getchar();
    return 0;
}
