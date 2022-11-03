#include <stdio.h>

void bubbleSort(int *A, int n)
{
    int temp, isSorted = 0;
    for (int i = 0; i < n - 1; i++) // Loop for each pass. You can aslo take i<n, here n-1 is taken just to understand that there will be n-1 passes for an array of n elements.
    {
        isSorted = 1;
        printf("Working on pass no. %d.\n", i); // Loop for comparisons and swapping in each pass, and if the array gets sorted before the last pass then it will exist out of both the loops, beasuse we have made it adaptive using isSorted, because by default Bubble Sort is not Adaptive.
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                isSorted = 0;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

// Proof of adaptiveness.
void printArray(int *A, int n)
{
    printf("\nSorted array is as follow: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}

int main()
{
    int A[] = {34, 12, 45, 23, 56, 25, 43, 49};
    int n = sizeof(A) / sizeof(A[0]);
    bubbleSort(A, n);
    printArray(A, n);

    int B[] = {1, 2, 3, 5, 6, 7, 8, 9};
    int n1 = sizeof(B) / sizeof(B[0]);
    bubbleSort(B, n);
    printArray(B, n);

    return 0;
}