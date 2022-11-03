#include <stdio.h>

int main()
{
    int arr[100], pos, i, size, value;
    printf("\nEnter number of elements of the array: ");
    scanf("%d", &size);

    printf("\nEnter the %d elements:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the value into that position: ");
    scanf("%d", &value);

    for (i = size - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = value;

    printf("Final array after inserting the value is\n");
    for (i = 0; i <= size; i++)
        printf("%d\n", arr[i]);

    return 0;
}
