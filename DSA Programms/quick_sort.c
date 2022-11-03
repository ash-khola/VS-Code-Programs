#include <stdio.h>

// Best case is when we get our first element in the middle of the array after first partition and the similar thing happens recurssively for all its subarrays and worst case is when we get an already sorted array. It is neither stable nor adaptive.
//    Case             Time Complexity 
// 1. Worst case         O(n2)    -->  Their will definately n-1 partitions.
// 2. Best case          O(nlog(n))
// 3. Average case       O(nlog(n))

int partition(int A[], int low, int high)
{
    int temp;
    int i = low + 1;
    int j = high;
    int pivot = A[low];

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

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
    int A[] = {54, 32, 34, 16, 12, 3, 5, 31};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Unsorted array: ");
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printf("Sorted by Quick Sort: ");
    printArray(A, n);

    return 0;
}