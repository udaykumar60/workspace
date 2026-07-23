
//C Program to Read a Matrix and Print Diagonals.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Primary diagonal: ");
    for (i = 0; i < n; i++)
        printf("%d ", mat[i][i]);

    printf("\nSecondary diagonal: ");
    for (i = 0; i < n; i++)
        printf("%d ", mat[i][n - 1 - i]);
    printf("\n");

    return 0;
}
