#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *createNode(int data)
{
    struct node *nd;
    nd = (struct node *)malloc(sizeof(struct node));
    nd->data = data;
    nd->left = NULL;
    nd->right = NULL;

    return nd;
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && prev->data >= root->data)
        {
            return 0;
        }
        prev = root;
        return (isBST(root->right));
    }
    else
        return 1;
}

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{
    struct node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL && root->data == value)
    {
        free(root);
        return NULL;
    }
    else if (value < root->data)  // to make if condition skipable we use else if instead of using if only.
    {
        root->left = deleteNode(root->left, value);
    }
    else  if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root, ipre->data);
    }
    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int main()
{
    struct node *p, *p1, *p2, *p3, *p4;
    p = createNode(5);
    p1 = createNode(3);
    p2 = createNode(6);
    p3 = createNode(1);
    p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    if (isBST(p))
    {
        printf("The tree is a BST.\n");
    }
    else
    {
        printf("The tree is not a BST.\n");
    }
    
    inOrder(p);
    deleteNode(p, 70);
    printf("\nAfter deletion.\n") ;
    inOrder(p);
    return 0;
}