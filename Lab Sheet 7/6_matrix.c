#include <stdio.h>
#define MAX_SIZE 10

void multiplyMatrices(int mat1[][MAX_SIZE], int rows1, int cols1, int mat2[][MAX_SIZE], int rows2, int cols2, int result[][MAX_SIZE])
{
    int i, j, k;
    // Multiply matrices
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int i, j;

    printf("Enter the dimension of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the dimension of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrices can be multiplied
    if (cols1 != rows2)
    {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }
    else
    {
        printf("Enter elements of second matrix:\n");
        readMatrix(mat1, rows1, cols1);
        printf("Enter elements of first matrix:\n");
        readMatrix(mat2, rows2, cols2);
        multiplyMatrices(mat1, rows1, cols1, mat2, rows2, cols2, result);
        printf("Product of the matrices:\n");
        printMatrix(result, rows1, cols2);
        return 0;
    }
}
