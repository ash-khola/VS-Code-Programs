#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to print Circular linked list 
void printList(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        printf("\n");
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
}

// Function to create circular linked list
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

    temp->next = head;
    return head;
}

int main()
{
    int n, i = 0;
    printf("Enter the number(even) of nodes in circular linked list: ");
    scanf("%d", &n);
    if (n == 0)
        exit(0);
    struct Node *head;
    head = createList(n);
    printf("The original created circular linked list is as follow: ");
    printList(head);

    struct Node *head1 = head;
    struct Node *temp = head;

    while (i < (n / 2) - 1)
    {
        temp = temp->next;
        i++;
    }

    i++;

    struct Node *head2 = temp->next; 
    temp->next = head1;
    temp = head2;

    while (i < n - 1)
    {
        temp = temp->next;
        i++;
    }

    temp->next = head2;

    printf("\nFirst Circular Linked List");
    printList(head1);
    printf("\nSecond Circular Linked List");
    printList(head2);

    return 0;
}
