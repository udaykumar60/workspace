
//C Program to find Sum of all elements of each row of a matrix.

#include <stdio.h>

int main() {
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++)
            sum = sum + mat[i][j];
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
