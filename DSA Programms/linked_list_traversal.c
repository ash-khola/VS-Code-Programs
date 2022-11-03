#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void traversal(struct Node *head)
{
    struct Node *temp;
    temp = head;
    printf("The linked list is as follow:\n");
    printf("%d", temp->data);
    temp = temp->link;
    while (temp != NULL)
    {
        printf(" -> ");
        printf("%d", temp->data);
        temp = temp->link;
    }
}

void find (struct Node *head)
{
    struct Node *P1 = head, *P2 =head;
    while(P2)
    {
        P1 = P1->link;
        P2 = (P2->link)?P2->link:NULL;
    }
    printf("%d", P1->data);
}

int main()
{
    int n;
    int num;
    printf("Enter the number of terms present in the list: ");
    scanf("%d", &n);

    struct Node *head;
    struct Node *temp;
    head = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the data of node %d is:", i);
        scanf("%d", &num);
        if (i == 1)
        {
            head->data = num;
            head->link = NULL;
        }
        else
        {
            struct Node *new_node;
            new_node = (struct Node *)malloc(sizeof(struct Node));
            new_node->data = num;
            new_node->link = NULL;
            temp->link = new_node;
            temp=temp->link;
        }
    }
    // traversal(head);
    find(head);
    return 0;
}