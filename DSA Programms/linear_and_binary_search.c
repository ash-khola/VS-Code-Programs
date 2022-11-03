#include <stdio.h>

// int linearSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (element == arr[mid])
        {
            return mid;
        }
        if (element < mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4,67,78,79,85,89}; //Array should be sorted for using binary search
    int size, element;
    printf("\nEnter the element to be searched in the array: ");
    scanf("%d", &element);

    size = sizeof(arr) / sizeof(int);
    // int k = linearSearch(arr, size, element);
    int k1 = binarySearch(arr, size, element);
    // printf("\nThe elemrnt %d was found at index %d.\n", element, k);
    printf("\nThe element %d was found at index %d.\n", element, k1);

    return 0;
}
