#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void enqueue(int val)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full.\n");
    }
    else
    {
        if (f == NULL)
        {
            n->data = val;
            n->next = NULL;
            f = r = n;
        }
        else
        {
            n->data = val;
            n->next = NULL;
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    if (f == NULL) // This is just to check whether the free memeroy is available or not to add a new node to the list. In 99.9% case their will be no shortage of memory.
    {
        printf("Queue is empty.\n");
    }
    else
    {
        struct Node *ptr;
        val = f->data;
        ptr = f;
        f = f->next;
        free(ptr);
    }

    return val;
}

void linked_list_traversal(struct Node *q)
{
    printf("Traversing the linked list.\n");
    while (q != NULL)
    {
        printf("Element: %d\n", q->data);
        q = q->next;
    }
}

int main()
{

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    linked_list_traversal(f);
    printf("\n");

    printf("Dequeuing element %d.\n", dequeue());
    printf("Dequeuing element %d.\n", dequeue());
    printf("Dequeuing element %d.\n", dequeue());
    printf("Dequeuing element %d.\n", dequeue());
    printf("Dequeuing element %d.\n", dequeue());
    printf("Dequeuing element %d.\n", dequeue());

    return 0;
}