#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;
    int i, j, d;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for(d = 0; d < rows + cols - 1; d++) {
        int start_row = (d < cols) ? 0 : d - cols + 1;
        int start_col = (d < cols) ? d : cols - 1;

        for(i = start_row, j = start_col; i < rows && j >= 0; i++, j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

