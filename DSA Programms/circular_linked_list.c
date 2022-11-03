#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node *head)
{
    struct Node *p;
    p = head;

    do
    {
        printf("Element is: %d\n", p->data);
        p = p->next;
    } while (p != head);
}

struct Node *insert_at_first(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data ;
    struct Node *p;
    p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

int main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 23;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 16;
    fourth->next = head;

    printf("Circular linked list before traversal:\n");
    linked_list_traversal(head);

    printf("Circular linked list before traversal:\n");
    head = insert_at_first(head, 18);
    linked_list_traversal(head);

    return 0;
}