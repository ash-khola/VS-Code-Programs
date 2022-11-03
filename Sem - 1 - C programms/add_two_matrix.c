#include <stdio.h>
int main()
{
    int matrix1[5][5], matrix2[5][5];
    int rows1, column1, rows2, column2;

    printf("Enter the number of rows in the matrix1: ");
    scanf("%d", &rows1);

    printf("Enter the number of rows in the matrix1: ");
    scanf("%d", &column1);

    printf("Enter the number of rows in the matrix2: ");
    scanf("%d", &rows2);

    printf("Enter the number of rows in the matrix2: ");
    scanf("%d", &column2);

    if (rows1 == rows2 && column1 == column2)
    {
        printf("Enter the elements of matrix1:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the elements of matrix2:\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        int sum[rows1][column1];

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("The summation of both the matrix is:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Addition can't be performed because number of rows and column of both matrix do not match.");
    }

    return 0;
}