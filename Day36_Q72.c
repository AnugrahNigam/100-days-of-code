//Q72: Find the sum of all elements in a matrix.

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

    int sum = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
