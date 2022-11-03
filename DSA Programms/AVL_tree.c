#include <stdio.h>
#include <stdlib.h>
// #define and &&
// #define c1 printf("Entered here1\n")
// #define c2 printf("Entered here2\n")

struct Node
{
    int data, height;
    struct Node *left, *right;
};

// Function to create new node
struct Node *createNode(int key)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->height = 1;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}

// Function to get the height of any node
int height(struct Node *node)
{
    if (node == NULL)
        return 0;
    return node->height;
}

// Func. to get compare height of any two nodes
int max(int a, int b)
{
    return (a > b ? a : b);
}

// Func. to get the balance factor of any node
int getBalance(struct Node *node)
{
    if (node == NULL)
        return 0;
    return (height(node->left) - height(node->right));
}

// Func. to do left rotation
struct Node *LLrotate(struct Node *nd)
{
    struct Node *x = nd->right;
    struct Node *y = x->left;

    x->left = nd;
    nd->right = y;

    nd->height = max(height(nd->left), height(nd->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Func. to do right rotation
struct Node *RRrotate(struct Node *nd)
{
    struct Node *x = nd->left;
    struct Node *y = x->right;

    x->right = nd;
    nd->left = y;

    nd->height = max(height(nd->left), height(nd->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Func. tio insert a new node in tree
struct Node *insert(struct Node *node, int key)
{
    if (node == NULL)
        return createNode(key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    else if (key < node->data)
        node->left = insert(node->left, key);
    else
        return node;

    node->height = max(height(node->left), height(node->right)) + 1;

    int balance = getBalance(node);

    if (balance < -1 && key > node->right->data)
        node = LLrotate(node);
    else if (balance > 1 && key < node->left->data)
        node = RRrotate(node);
    else if (balance < -1 && key < node->right->data)
    {
        node->right = RRrotate(node->right);
        node = LLrotate(node);
    }
    else if (balance > 1 && key > node->left->data)
    {
        node->left = LLrotate(node->left);
        node = RRrotate(node);
    }

    return node;
}

// Func. to get the height of tree
int heightOfTree(struct Node *node)
{
    if (!node)
        return 0;

    return max(height(node->left), height(node->right)) + 1;
}

// Func. to find the inorder successor of a node (for the purpose of deletion)
struct Node *inorderSuccessor(struct Node *node)
{
    node = node->right;

    while (node->left)
        node = node->left;

    return node;
}

// Func. to delete a node
struct Node *deleteNode(struct Node *node, int key)
{
    if (key > node->data)
        node->right = deleteNode(node->right, key);
    else if (key < node->data)
        node->left = deleteNode(node->left, key);
    else
    {
        if (node->left == NULL)
        {
            struct Node *temp = node->right;
            free(node);
            return temp;
        }
        else if (node->right == NULL)
        {
            struct Node *temp = node->left;
            free(node);
            return temp;
        }
        else
        {
            struct Node *isuc = inorderSuccessor(node);
            node->data = isuc->data;
            node->right = deleteNode(isuc, isuc->data);
        }
    }
    return node;
}

// Inorder traversal
void inorder(struct Node *node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

// Preorder traversal
void preorder(struct Node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preorder(node->left);
    preorder(node->right);
}

// Postorder traversal
void postorder(struct Node *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%d ", node->data);
}

/***************************************** Code starts here ****************************************/

int main()
{
    int n, data, del;
    printf("Ener the no. of nodes in the tree: ");
    scanf("%d", &n);

    struct Node *root = NULL;

    printf("Etner the data of each node of tree:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        root = insert(root, data);
    }

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    printf("The height of tree is: %d\n", heightOfTree(root));
    // printf("The height of tree is: %d\n", height(root));   // can also get height by this

    printf("Enter the data of node to be deletd from the tree: ");
    scanf("%d", &del);
    deleteNode(root, del);

    printf("Inorder Traversal after delettion: ");
    inorder(root);
    printf("\n");

    return 0;
}
