#include <stdio.h>
#define MAX_SIZE 10

void calculateRowSum(int matrix[][MAX_SIZE], int rows, int cols, int rowSum[])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }
}

void calculateColumnSum(int matrix[][MAX_SIZE], int rows, int cols, int colSum[])
{
    int i, j;

    for (j = 0; j < cols; j++)
    {
        colSum[j] = 0;
        for (i = 0; i < rows; i++)
        {
            colSum[j] += matrix[i][j];
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rowSum[MAX_SIZE];
    int colSum[MAX_SIZE];
    int rows, cols;
    int i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    calculateRowSum(matrix, rows, cols, rowSum);
    calculateColumnSum(matrix, rows, cols, colSum);

    printf("Row sums: ");
    printArray(rowSum, rows);

    printf("Column sums: ");
    printArray(colSum, cols);

    return 0;
}
