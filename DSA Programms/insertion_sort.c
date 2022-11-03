#include<stdio.h>

void insertionSort(int *A, int n)
{
    int  key,j ;
    for (int i = 1; i<=n-1; i++)
    {
        j = i-1;
        key = A[i];
        while(j>=0 && A[j]>key)   // Insertion sort is Adaptive by default because if a sorted array is passed in the loop then it will not enter in the while loop and the time complexity will be O(n) in the best case(the array passed is already sorted).
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

void printArray(int *A, int n)
{
    printf ("The Insertion sorted array is as folllow: ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n\n");
}

int main()
{
    int A[] = {34,45,1,42,7,31,4,12,56,33};
    int n = sizeof(A) / sizeof(A[0]);
    insertionSort(A, n);
    printArray(A, n);

    return 0;
}