#include <bits/stdc++.h>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next = NULL;
};

StackNode *newNode(int val)
{
    StackNode *stackNode = new StackNode();
    stackNode->data = val;
    stackNode->next = NULL;
    return stackNode;
}

void push(StackNode **root, int val)
{
    StackNode *stackNode = newNode(val);
    stackNode->next = (*root);
    (*root) = stackNode;
    cout << (*root)->data << " pushed to stack\n";
}

int pop(StackNode **root)
{
    if (!*root)
        return -1;
    else
    {
        StackNode *temp = *root;
        int popped = temp->data;
        (*root) = (*root)->next;
        // cout << temp->data << " popped from stack" << endl;
        free(temp);
        return popped;
    }
}

// int pop(StackNode *root)
// {
//     if (!root)
//         return -1;
//     else
//     {
//         StackNode *temp = root;
//         int popped = temp->data;
//         (root) = (root)->next;
//         // cout << temp->data << " popped from stack" << endl;
//         free(temp);
//         return popped;
//     }
// }

int top(StackNode *root)
{
    if (!root)
        return -1;
    else
        return root->data;
}

bool isEmpty(StackNode *root)
{
    return !root;
}

int main()
{
    StackNode *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << top(root) << endl;

    cout << "Elements present in stack : ";
    // print all elements in stack :

    while (!isEmpty(root))
    {
        // print top element in stack
        cout << top(root) << " ";
        // remove top element in stack
        pop(&root);
        i++;
    }

    return 0;
}