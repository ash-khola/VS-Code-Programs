#include <stdio.h>

int main()
{
	int arr1[10], arr2[10];
	int m, n;

	printf("Enter the number of elements in array 1: ");
	scanf("%d", &m);

	printf("Enter the number of elements in array 2: ");
	scanf("%d", &n);

	int size = m + n;
	int merged[size];

	printf("Enter the elements of array1: ");
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
		merged[i] = arr1[i];
	}

	printf("Enter the elements of array2: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
		merged[m + i] = arr2[i];
	}

	printf("Elements of merged array are: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d  ", merged[i]);
	}

	return 0;
}
