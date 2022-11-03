#include <stdio.h>
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void main()
{
    int i, j, temp, size;
    int a[50];
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of array.\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before sorting array elements are - \n");
    print(a, size);
    bubble(a, size);
    printf("\nAfter sorting array elements are - \n");
    print(a, size);
}