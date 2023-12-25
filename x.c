#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int firstMatrix[MAX_ROWS][MAX_COLS], secondMatrix[MAX_ROWS][MAX_COLS], resultMatrix[MAX_ROWS][MAX_COLS];
    int row1, col1, row2, col2;

    // Get dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    // Get elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Get dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    // Get elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible with these dimensions.\n");
        return 1;
    }

    // Initialize result matrix with zeros
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            resultMatrix[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Display the product matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
