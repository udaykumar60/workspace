
//C Program to Transpose a Matrix.

#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c], trans[c][r];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Transpose
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
