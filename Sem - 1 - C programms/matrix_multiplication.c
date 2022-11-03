#include <stdio.h>

int main()
{
    int m, n, p, q, c, d, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);

    if (n != p)
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        printf("Enter the elements of first matrix\n");

        for (c = 0; c < m; c++)
            for (d = 0; d < n; d++)
                scanf("%d", &first[c][d]);

        printf("Enter the elements of second matrix\n");

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &second[c][d]);

        int row, column;
        if (m < p)
            row = m;
        else
            row = p;

        if (n < q)
            column = n;
        else
            column = q;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                multiply[i][j] = 0;

                for (int k = 0; k < n; k++)
                {
                    multiply[i][j] += (first[i][k] * second[k][j]);
                }
            }
        }

        printf("The product of the given two matrix is:\n");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d ", multiply[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}