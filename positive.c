#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int A[10][10], B[10][10], C[10][10];

    // Read the number of rows and columns for the matrices
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read the elements of matrix A
    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Read the elements of matrix B
    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix addition and store the result in matrix C
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print the result matrix C
    printf("Resultant matrix C = \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

