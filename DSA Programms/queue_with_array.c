#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f;
    int r;
    int *arr;
    int size;
};

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is Full.\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqueuing element %d.\n",val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }

    return a;
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->arr = (int *)malloc(q->size*sizeof(int));
    q->r = q->f = -1;
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);
    printf("\n");
    printf("Dequeing element %d.\n", dequeue(q));
    printf("Dequeing element %d.\n", dequeue(q));
    printf("Dequeing element %d.\n", dequeue(q));
    printf("Dequeing element %d.\n", dequeue(q));
    printf("Dequeing element %d.\n", dequeue(q));

    return 0;
}