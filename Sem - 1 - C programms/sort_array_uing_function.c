#include <stdio.h>

void sort(int *a, int n);

void main()
{
    int arr[100], i, n;

    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Enter %d elements:", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Array in ascending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}