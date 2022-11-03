#include <stdio.h>

int partition(int A[], int low, int high)
{
    int j = high;
    int i = low + 1;
    int B[400];
    int k = 0;

    do 
    {
        if (A[low] >= A[i])
        {
            i++;
        }
        if (A[low] < A[j])
        {
            j--;
        }
        if (j > i)
        {
            int temp;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while (j>i);

    int temp;
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}
        
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

void quick_sort(int A[], int low, int high)
{
    int partition_index;
    if (low < high)
    {
        partition_index = partition(A, low, high);
        quick_sort(A, low, partition_index - 1);
        quick_sort(A, partition_index + 1, high);
    }
}

int main()
{
    int A[3];
    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }
    quick_sort(A, 0, 2);
    printf("The greatest of the 3 numbers is %d.",A[2]);

    return 0;
}