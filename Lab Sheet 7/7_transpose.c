#include <stdio.h>
#define MAX_SIZE 10

void transposeMatrix(int matrix[][MAX_SIZE], int rows, int cols, int transpose[][MAX_SIZE])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
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
    int matrix[MAX_SIZE][MAX_SIZE];
    int transpose[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int i, j;

    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    transposeMatrix(matrix, rows, cols, transpose);
    printf("Original matrix:\n");
    printMatrix(matrix, rows, cols);
    printf("Transpose matrix:\n");
    printMatrix(transpose, cols, rows);
    return 0;
}
