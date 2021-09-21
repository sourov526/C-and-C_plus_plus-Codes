#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

NewNode(int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void Find_Nth_Node(struct Node* node, int n)
{
    static int cont = 0;
    if (node == NULL)
        return;

    if (cont <= n)
    {
        cont++;
        if (cont == n)
        {
            printf("%d", node->data);
        }
        Find_Nth_Node(node->left, n);
        Find_Nth_Node(node->right, n);
    }
}

int main()
{
    struct Node* root = NewNode(10);
    root->left = NewNode(20);
    root->right = NewNode(30);
    root->left->left = NewNode(40);
    root->left->right = NewNode(50);

    int n = 3;
    Find_Nth_Node(root, n);
    return 0;
}
