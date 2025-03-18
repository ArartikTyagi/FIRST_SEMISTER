#include <stdio.h>

int main() {
    int rows, columns;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Declare a matrix with the given size
    int matrix[rows][columns];

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
