#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *createNode(int value)
{
    struct node *nd;
    nd = (struct node *)malloc(sizeof(struct node));
    nd->data = value;
    nd->left = NULL;
    nd->right = NULL;

    return nd;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
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

struct node *inOrderPredecessor(struct node *root)  // This will not be used in the condition when the left pointer of the node to be deleted points to NULL and right subtree exists. 
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *inOrderSuccessor(struct node *root)  // This will not be used in the condition when the right pointer of the node to be deleted poionts to NULL and left subtree exists.
{
    root = root->right;
    while (root->left != NULL)
    {
        root = root->left;
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
    else if (root->left == NULL && root->right == NULL && root->data == value)
    {

        free(root);
        return NULL;
    }

    else if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
    }
    return root;
}

int isBST(struct node *root)
{
    struct node *prev;
    if (root != NULL)
    {
        return 1;
    }
    if (!isBST(root->left))
    {
        return 0;
    }
    if (prev != NULL && root->data <= prev->data)
    {
        return 0;
    }
    prev = root;
    return (isBST(root->right));
}

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST\n", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }
}

int main()
{
    struct node *p, *p1, *p2, *p3,*p4, *p5, *p6,*p7,*p8,*p9;
    p = createNode(100);
    p1 = createNode(50);
    p2 = createNode(150);
    p3 = createNode(30);
    p4 = createNode(70);
    p5 = createNode(120);
    p6 = createNode(170);
    p7 = createNode(40);
    p8 = createNode(45);
    p9 = createNode(160);
    
    
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    p3->right = p7;
    p7->right = p8;
    p6->left = p9;

    /*
             100                  
           /   \
         50     150                  
        /  \   /   \
       30  70 120   170
         \         /
         40       160
          \
          45

        Note:- inOrderPredecessor can't be used for 40 and inOrderSuceessor can't be used for 170.  
    */

    // printf("preOrder: ");
    // preOrder(p);
    // printf("\n");
    // printf("postOrder: ");
    // postOrder(p);
    // printf("\n");
    // printf("inOrder: ");
    // inOrder(p);
    // printf("\n");

    // if (isBST(p))
    // {
    //     printf("The tree is a BST.\n");
    // }
    // else
    // {
    //     printf("Th tree is not a BST.\n");
    // }

    // deleteNode(p, 170);
    // printf("After deletion.\n");
    // inOrder(p);

    insert(p,50);
    inOrder(p);

    return 0;
}