#include <bits/stdc++.h>
using namespace std;

struct queue
{
	int rear = -1, front = -1;
	int *arr;
	int size;
};

bool isFull (struct queue *q)
{
	if (q->rear == q.size() - 1)
		return true;
	return false;
}

bool isEmpty(struct queue *q)
{
	if (q->rear == q->front)
		return true;
	return false;
}

void enqueue(struct queue* q, int data)
{
	if (isFull(q))
		print("Queue is Full\n");
	else
		q->arr[++rear] = data;
}

void dequeue(struct queue* q)
{
	if (isEmpty(q))
		printf("Queue is empty.");
	else
		q->front++;
}

int main()
{
	printf("Enter the elements in the queue: ");
	scanf("%d", &n);

	struct queue *q;
	q = (struct queue *)malloc(sizeof(struct queue));
	q->size = n;
	q->arr = (int *)malloc(q->size * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		q.enqueue(data);
	}

	printf("The elements of queue are: ");
	display(q);

	q.dequeue();
	q.dequeue();

	printf("The elements of the queue after performing dequeue twice: ")
	display(q);

	return 0;
}