#include <stdio.h>
#include <stdlib.h>

struct Node;

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node *createList(int n)
{
    struct Node *head, *temp;
    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data of node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;
    temp = head;

    for (int i = 2; i <= n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data of node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }

    return head;
}

// Function to insert node after a specified user data
void InsertAtKey(struct Node **head, int key, int value)
{
    struct Node *newNode, *trav;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    trav = *head;
    while (trav->data != key)
    {
        trav = trav->next;
    }

    newNode->next = trav->next;
    trav->next = newNode;
}

// Function to print list
void printList(struct Node *head)
{
    if (head == NULL)
        return;

    if (head->next != NULL)
        printf("%d -> ", head->data);
    else
        printf("%d", head->data);
    printList(head->next);
}

void printRevList(struct Node *head)
{
    if (head == NULL)
        return;

    printRevList(head->next);
    if (head->next != NULL)
        printf(" <- %d", head->data);
    else
        printf("%d", head->data);
}

void reverseItr(struct Node **head)
{
    struct Node *curr = *head;
    struct Node *prev = NULL;
    struct Node *nex;

    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    *head=prev;
}

struct Node *RecReverse(struct Node *head)
{
    if (head == NULL || (head)->next == NULL)
        return head;

    struct Node *newHead = RecReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{
    int n;
    printf("Enter the number of nodes to be inserted in the linked list: ");
    scanf("%d", &n);

    if (n == 0)
        exit(0);

    struct Node *head;
    head = createList(n);

    // Printing list elements in reverse order
    printf("\nElements of linked list using the concept of recursion:\n");
    printList(head);

    // Printing list elements using recurion
    printf("\nElements of linked list using the concept of recursion:\n");
    printRevList(head);

    // Reversing list by iterative method
    printf("\nReversed linked list using iterative version:\n");
    reverseItr(&head);
    printList(head);

    reverseItr(&head);

    // Reversing list using recursion
    printf("\nReversed linked list using recursive version:\n");
    head = RecReverse(head);
    printList(head);

    return 0;
}