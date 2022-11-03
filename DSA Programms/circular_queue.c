#include <stdio.h>
#include <malloc.h>

struct circularQueue
{
    int f, r;
    int *arr;
    int size;
};

int is_full(struct circularQueue *crq)
{
    if ((crq->r + 1) % crq->size == crq->f)
    {
        return 1;
    }
    else
        return 0;
}

int is_empty(struct circularQueue *crq)
{
    if (crq->r == crq->f)
    {
        return 1;
    }
    else
        return 0;
}

void enqueue(struct circularQueue *crq, int val)
{
    if (is_full(crq))
    {
        printf("Circular queue is full.\n");
    }
    else
    {
        crq->r = (crq->r + 1) % crq->size;
        crq->arr[crq->r] = val;
        printf("Enqueuing element %d.\n", val);
    }
}

int dequeue(struct circularQueue *crq)
{
    int val = -1;
    if (is_empty(crq))
    {
        printf("Cirular queue is empty.\n");
    }
    else
    {
        crq->f = (crq->f + 1) % crq->size;
        val = crq->arr[crq->f];
    }
    return val;
}

int main()
{
    struct circularQueue *crq;
    crq = (struct circularQueue *)malloc(sizeof(struct circularQueue));
    crq->size = 5;
    crq->arr = (int *)malloc(crq->size*sizeof(int)); // btw it also works without crq->size, butt it is recommended to use size
    crq->f = crq->r = 0;
    enqueue(crq, 1);
    enqueue(crq, 2);
    enqueue(crq, 3);
    enqueue(crq, 4);
    // enqueue(crq, 5); // Note :- Circular queue cannot make ful use of its size at once, at max. it can store size-1 elements in it, therefore besides having size 5 it cannot store element 5 in it.

    printf("\n");

    printf("Dequeuing element %d.\n", dequeue(crq));
    printf("Dequeuing element %d.\n", dequeue(crq));
    enqueue(crq, 5);
    printf("Dequeuing element %d.\n", dequeue(crq));
    printf("Dequeuing element %d.\n", dequeue(crq));
    printf("Dequeuing element %d.\n", dequeue(crq)); // Should show that queue is empty for this line.

    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// struct queue
// {
// 	int rear;
// 	int front;
// 	int *arr;
// 	int size;
// };

// int isFull(struct queue *q)
// {
// 	if (q->rear == q->front - 1 or (q->rear == q->size - 1 and q->front == 0))
// 		return 1;
// 	return 0;
// }

// int isEmpty(struct queue *q)
// {
// 	if (q->front == -1 or (q->front == (q->rear + 1)))
// 		return 1;
// 	return 0;
// }

// void enqueue(struct queue *q, int data)
// {
// 	if (isFull(q))
// 		printf("Queue is Full\n");
// 	else
// 	{
// 		if (q->front == -1)
// 			q->front++;
// 		++q->rear;
// 		q->rear %= q->size;
// 		q->arr[q->rear] = data;
// 		printf("%d enqueued in queue.\n", q->arr[q->rear]);
// 	}
// }

// void dequeue(struct queue *q)
// {
// 	if (isEmpty(q))
// 		printf("Queue is empty.\n");
// 	else
// 	{
// 		printf("%d dequeued from queue.\n", q->arr[q->front]);
// 		q->front++;
// 		q->front %= q->size;
// 	}
// }

// int main()
// {
// 	struct queue *q;
// 	q = (struct queue *)malloc(sizeof(struct queue));
// 	q->size = 5;
// 	q->arr = (int *)malloc(q->size * sizeof(int));
// 	q->rear = q->front = -1;

// 	enqueue(q, 1);
// 	enqueue(q, 2);
// 	enqueue(q, 3);
// 	enqueue(q, 4);
// 	enqueue(q, 5);
// 	enqueue(q, 6);

// 	printf("\n");

// 	dequeue(q);
// 	dequeue(q);
// 	dequeue(q);
// 	dequeue(q);
// 	dequeue(q);
// 	dequeue(q);

// 	return 0;
// }