#include <stdio.h>
int main()
{
    int arr[20], num, i, small;
    printf("\nEnter the number of elements ");
    scanf("%d", &num);
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i] < arr[small])
                small = i;
        }
        else
            small = i;
    }
    printf("The index of the smallest element is %d", small);
}