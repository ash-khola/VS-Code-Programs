
#include <stdio.h>

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void reverse(int arr[], int n)
{
    int aux[n];

    for (int i = 0; i < n; i++)
    {
        aux[n - 1 - i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = aux[i];
    }
}

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

int main(void)
{
    int arr[50], size, duplicate[50];
    printf("Enter the length of array: ");
    scanf("%d", &size);

    printf("Enter the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        duplicate[i] = arr[i];
    }

    reverse(arr, size);
    printf("\nThe reversed array is: ");
    print(arr, size);

    selection(duplicate, size);
    printf("\nThe sorted array is: ");
    print(duplicate, size);

    return 0;
}