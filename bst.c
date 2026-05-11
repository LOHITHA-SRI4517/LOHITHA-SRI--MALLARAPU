#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *root = 0;

struct tree* create(struct tree *root, int value)
{
    if(root == 0)
    {
        struct tree *newnode;

        newnode = (struct tree*)malloc(sizeof(struct tree));

        newnode->data = value;
        newnode->left = 0;
        newnode->right = 0;

        return newnode;
    }

    if(value < root->data)
    {
        root->left = create(root->left, value);
    }
    else
    {
        root->right = create(root->right, value);
    }

    return root;
}

void inorder(struct tree *root)
{
    if(root != 0)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct tree *root)
{
    if(root != 0)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct tree *root)
{
    if(root != 0)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    int i, n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);

        root = create(root, value);
    }

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
