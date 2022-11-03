#include <stdio.h>
#include <malloc.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int is_full(struct stack *st)
{
    if (st->top == st->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty(struct stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *st, int val)
{
    if (is_full(st))
    {
        printf("Stack is full.\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = val;
    }
}

int pop(struct stack *st)
{
    if (is_empty(st))
    {
        printf("Stack is empty.\n");
        return -1;
    }
    else
    {
        int val;
        val = st->arr[st->top];
        st->top--;
        return val;
    }
}

int peek(struct stack *st, int pos)
{
    if (is_empty(st))
    {
        printf("Stack is full.\n");
        return -1;
    }
    else
    {
        return (st->arr[st->top - pos + 1]);
    }
}

int main()
{
    struct stack *st;
    st = (struct stack *)malloc(sizeof(struct stack));
    st->size = 6;
    st->arr = (int *)malloc(st->size * sizeof(struct stack));
    st->top = -1;

    push(st, 3);
    push(st, 14);
    push(st, 34);
    push(st, 2);
    push(st, 5);
    push(st, 4);

    printf("Peeked element %d from position %d.\n", peek(st, 4), 4);
    printf("Peeked element %d from position %d.\n", peek(st, 3), 3);
    printf("Peeked element %d from position %d.\n", peek(st, 1), 1);
    printf("Peeked element %d from position %d.\n", peek(st, 2), 2);
    printf("Peeked element %d from position %d.\n", peek(st, 5), 5);

    return 0;
}