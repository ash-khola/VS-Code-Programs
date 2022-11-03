#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50], pos, i, num;
    printf("\nEnter the number of elements in array: \n ");
    scanf("%d", &num);
    printf("\nEnter %d elements in array: \n ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Define the position of the array element where you want to delete: \n");
    scanf("%d", &pos);
    if (pos >= num + 1)
    {
        printf("\nDeletion not possible, please recheck!");
    }
    else
    {
        for (i = pos - 1; i < num - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("\nThe final array is: \n");
        for (i = 0; i < num - 1; i++)
        {
            printf("%d \n", arr[i]);
        }
    }
    return 0;
}
