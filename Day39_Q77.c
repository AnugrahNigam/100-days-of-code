//Q77: Check if the elements on the diagonal of a matrix are distinct.

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

    int areDistinct = 1;
    for (i = 0; i < rows && areDistinct; i++) {
        for (j = i + 1; j < cols && areDistinct; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                areDistinct = 0;
            }
        }
    }

    if (areDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
