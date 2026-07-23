
//C program to calculate Sum, Product of all elements.

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    long long product = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Product = %lld\n", product);

    return 0;
}
