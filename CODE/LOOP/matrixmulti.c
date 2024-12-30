#include <stdio.h>

int main() {
    int rows1, colu1, rows2, colu2;

    // Getting size of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &colu1);

    // Getting size of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &colu2);

    // Check if matrix multiplication is possible
    if (colu1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Create matrices
    int matrix1[rows1][colu1], matrix2[rows2][colu2], result[rows1][colu2];

    // Get elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colu1; j++) {
            printf("Element[%d][%d]: ", i + 1, j + 1); // Print the prompt
            scanf("%d", &matrix1[i][j]); // Correct scanf usage
        }
    }

    // Get elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < colu2; j++) {
            printf("Element[%d][%d]: ", i + 1, j + 1); // Print the prompt
            scanf("%d", &matrix2[i][j]); // Correct scanf usage
        }
    }

    // Print the first matrix
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colu1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Print the second matrix
    printf("\nSecond Matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < colu2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colu2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colu1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("\nResultant Matrix (Multiplication):\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colu2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}