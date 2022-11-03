#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *delete_at_first(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

struct Node *delete_at_index(struct Node *head, int index)
{
    struct Node *ptr, *p;
    ptr = head;
    p = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr = p->next;
    free(p);

    return head;
}

struct Node *delete_at_end(struct Node *head)
{
    struct Node *ptr, *p;
    ptr = head;
    p = head->next;
    while (p->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = NULL;
    free(p);

    return head;
}

struct Node *delete_by_value(struct Node *head, int value)
{
    struct Node *ptr, *p;
    ptr = head;
    p = head->next;
    while (p->data != value && p->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }
    if (p->next != NULL)
    {
        ptr->next = p->next;
        free(p);
    }
    return head;
}

int main()
{
    struct Node *head, *second, *third, *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 34;
    head->next = second;

    second->data = 31;
    second->next = third;

    third->data = 35;
    third->next = fourth;

    fourth->data = 46;
    fourth->next = NULL;

    linked_list_traversal(head);

    printf("Linked list after performing the deletion operation is:\n");
    // Case 1: Deleting the first element from the linked list
    // head = delete_at_first(head);
    // linked_list_traversal(head);

    // Case2: Deleting the element at a given index
    //  head = delete_at_index(head,2);
    //  linked_list_traversal(head);

    // Case3: Deleting the element at last
    // head = delete_at_end(head) ;
    // linked_list_traversal(head) ;

    // Case4: Deleting the element with a given value from the linked list
    // head = delete_by_value(head,35);  //will not work for first and last element of list
    // linked_list_traversal(head);

    return 0;
}