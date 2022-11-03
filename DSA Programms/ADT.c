#include <stdio.h>
#include <stdlib.h>
// we are creating an Abstract Data Type which is array, which we commonly use diectly with the help of "[]", without making all these functiions again and again.
struct myarray
{
    int tsize, usize;
    int *ptr;
};

void create_array(struct myarray *p, int tsize, int usize)
{
    p->usize = usize;
    p->tsize = tsize;
    p->ptr = (int *)malloc(tsize * sizeof(int));
}

void set_value(struct myarray *p)
{
    int n;
    printf("Enter the values in the array:\n");
    for (int i = 0; i < p->usize; i++)
    {
        scanf("%d", &n);
        (p->ptr)[i] = n;
    }
}

void show(struct myarray *p)
{
    for (int i = 0; i < p->usize; i++)
    {
        printf("%d ", (p->ptr)[i]);
    }
}

int main()
{
    struct myarray m1;
    create_array(&m1, 10, 6);
    set_value(&m1);
    show(&m1);

    return 0;
}
