#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int top;
    int size;
    char *arr;
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

int parenthesis_match(char *ch)
{
    struct stack *st;
    // st = (struct stack *)malloc(sizeof(struct stack));
    st->size = strlen(ch);
    st->arr = (char *)malloc(st->size * sizeof(char));
    st->top = -1;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == '(')
        {
            push(st, ch[i]);
        }
        else if (ch[i] == ')')
        {
            if (is_empty(st))
            {
                return 0;
            }
            else
            {
                pop(st);
            }
        }
    }
    if (is_empty(st))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    char *ch = "67(i)";
    printf("%d", parenthesis_match(ch));
    return 0;
}