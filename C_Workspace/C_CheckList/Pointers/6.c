
//Program to read array elements and print with addresses.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nElement\t\tAddress\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%p\n", *(arr + i), (arr + i));
    }

    return 0;
}
