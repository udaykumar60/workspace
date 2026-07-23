
//C Program to Read a Matrix and find Sum and Product of all elements.

#include <stdio.h>

int main() {
    int r, c, i, j;
    int sum = 0;
    long long product = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum = sum + mat[i][j];
            product = product * mat[i][j];
        }
    }

    printf("Sum = %d\n", sum);
    printf("Product = %lld\n", product);

    return 0;
}
