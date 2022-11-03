#include <stdio.h>

int display(int arr[], int size, int capacity)
{
    if (size > capacity)
    {
        return -1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

void delete (int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int size, capacity = 100;
    int arr[100] = {3, 5, 2, 7, 4, 23};
    size = 6;
    display(arr, size, capacity);
    // insert(arr, size, 3, 45);
    // size += 1;
    // display(arr, size, capacity);
    delete (arr, size, 2);
    size -= 1;
    display(arr, size, capacity);

    return 0;
}