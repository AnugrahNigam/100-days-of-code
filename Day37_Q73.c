//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowSums[rows];
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    printf("The sum of each row is: ");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}
