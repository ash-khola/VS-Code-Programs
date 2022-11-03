#include <stdio.h>

void insert(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
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
    insert(a, size);
    printf("\nAfter sorting array elements are - \n");
    printArr(a, size);

    return 0;
}