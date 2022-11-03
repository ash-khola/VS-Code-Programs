#include <stdio.h>
#include <stdlib.h>

struct deQueue
{
    int f;
    int r;
    int *arr;
    int size;
};

int isFull(struct deQueue *deq)
{
    if (deq->r == deq->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct deQueue *deq)
{
    if (deq->f == deq->r)
    {
        return 1;
    }
    return 0;
}

void enqueueRear(struct deQueue *deq, int val)
{
    if (isFull(deq))
    {
        printf("Dequeue is Full.\n");
    }
    else
    {
        deq->r++;
        deq->arr[deq->r] = val;
    }
}

void enqueueFront(struct deQueue *deq, int val) // There is some doubt in logic of enqueuing form front.
{
    if (deq->f == -1 && deq->r == deq->size - 1)
    {
        printf("Cannot insert element at the begining of dequeue.\n");
    }
    else
    {
        deq->arr[deq->f] = val;
        deq->f--;
    }
}

int dequeueFront(struct deQueue *deq)
{
    int val = -1;
    if (isEmpty(deq))
    {
        printf("Dequeue is Empty.\n");
    }
    else
    {
        deq->f++;
        val = deq->arr[deq->f];
    }
    return val;
}

int dequeueRear(struct deQueue *deq)
{
    int val = -1;
    if (isEmpty(deq))
    {
        printf("Dequeue is Empty.\n");
    }
    else
    {
        val = deq->arr[deq->r];
        deq->r--;
    }
    return val;
}

int main()
{
    struct deQueue *deq;
    deq = (struct deQueue *)malloc(sizeof(struct deQueue));
    deq->size = 5;
    deq->arr = (int *)malloc(deq->size*sizeof(int));
    deq->f = deq->r = -1;

    enqueueRear(deq, 1);
    enqueueRear(deq, 2);
    enqueueRear(deq, 3);
    enqueueRear(deq, 4);
    enqueueRear(deq, 5);

    // enqueueFront(deq, 1);
    // enqueueFront(deq, 2);
    // enqueueFront(deq, 3);
    // enqueueFront(deq, 4);
    // enqueueFront(deq, 5);

    printf("Dequeuing element %d.\n", dequeueFront(deq));
    printf("Dequeuing element %d.\n", dequeueFront(deq));
    printf("Dequeuing element %d.\n", dequeueFront(deq));
    printf("Dequeuing element %d.\n", dequeueFront(deq));
    printf("Dequeuing element %d.\n", dequeueFront(deq));

    // printf("Dequeuing element %d.\n", dequeueRear(deq));
    // printf("Dequeuing element %d.\n", dequeueRear(deq));
    // printf("Dequeuing element %d.\n", dequeueRear(deq));
    // printf("Dequeuing element %d.\n", dequeueRear(deq));
    // printf("Dequeuing element %d.\n", dequeueRear(deq));

    return 0;
}
