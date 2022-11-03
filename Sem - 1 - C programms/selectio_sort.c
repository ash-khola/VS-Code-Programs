#include <stdio.h>

void selection(int arr[], int n)
{
    int i, j, small;

    for (i = 0; i < n - 1; i++)
    {
        small = i;

        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[small])
                small = j;

        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int size, i;
    int a[50];
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of array.\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before sorting array elements are - \n");
    printArr(a, size);
    selection(a, size);
    printf("\nAfter sorting array elements are - \n");
    printArr(a, size);
    return 0;
}