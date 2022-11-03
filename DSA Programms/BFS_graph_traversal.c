#include <stdio.h>
#include <malloc.h>

struct queue
{
    int f, r;
    int *arr;
    int size;
};

int is_full(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    if (is_full(q))
    {
        printf("Queue is full.\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int val = -1;
    if (is_empty(q))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        q->f++;
        val = q->arr[q->f];
    }
    return val;
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(q->size * sizeof(struct queue));
    q->size = 7;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->f = q->r = -1;

    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    int visited[] = {0, 0, 0, 0, 0, 0, 0};

    int i = 5;  // here instead of starting traversing of node from '0' we can also start traversing of node from any node, just change the value of 'i' and we will get different traversal order.
    visited[i] = 1;
    enqueue(q, i);
    printf("%d ", i);
    while (!is_empty(q))
    {
        int node = dequeue(q);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                enqueue(q, j);
                visited[j] = 1;
            }
        }
    }
    return 0;
}