
//C program to create array with reverse elements of one dimensional array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], rev[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Copy in reverse
    for (i = 0; i < n; i++)
        rev[i] = arr[n - 1 - i];

    printf("Original array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nReversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", rev[i]);
    printf("\n");

    return 0;
}
