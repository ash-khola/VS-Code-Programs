#include <stdio.h>

void merge(int A[], int low, int mid, int high)
{
    int B[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (int i = 0; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    mid = (low + high) / 2;
    if (low < high)
    {
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
// If you did not understood the above self referencing(recurssive) mergeSort function then understand through the tree given in the link -->https://www.geeksforgeeks.org/merge-sort/

// Merge sort is stable
// The time complexity of MergeSort is O(n*Log n) in all the 3 cases (worst, average and best) as the mergesort always divides the array into two halves and takes linear time to merge two halves.
// Merge sort is not adaptive in nature as its time complexity remains same in all the three cases.

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {12, 43, 21, 56, 2, 23, 4};
    int n = sizeof(A) / sizeof(A[0]);
    int m = (n - 1) / 2;
    printf("Unsorted array: ");
    printArray(A, n);
    printf("Sorted array by merge sort: ");
    mergeSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}