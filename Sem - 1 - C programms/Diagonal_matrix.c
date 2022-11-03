#include <stdio.h>
int main()
{
    int a[20][20], i, j, m, n;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of columns\n");
    scanf("%d", &n);
    printf("Enter the elements in the matrix a\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                printf("%d  ", a[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}