#include <stdio.h>

void selectionSort(int *A, int n)
{
    printf("Slection sort is running....\n");
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

// Selction sort is not Stable. 
// Selection sort is not Adaptive at all, because it performs the same no. of passes and compparisons for any kind of passed array (i.e whether sorted or not or partially sorted) and we can't make it adaptive by some code.

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}

int main()
{
    int A[] = {34, 12, 45, 2, 56, 11, 3, 5};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}