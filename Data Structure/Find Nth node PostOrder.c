#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

createNode(int item)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = item;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void NthPostordernode(struct Node* root, int N)
{
    static int flag = 0;

    if (root == NULL)
        return;

    if (flag <= N)
    {

        NthPostordernode(root->left, N);

        NthPostordernode(root->right, N);

        flag++;

        if (flag == N)
            printf("%d ",root->data);
    }
}

int main()
{
    struct Node* root = createNode(25);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(18);
    root->left->right = createNode(22);
    root->right->left = createNode(24);
    root->right->right = createNode(32);

    int N = 5;

    NthPostordernode(root, N);

    return 0;
}
