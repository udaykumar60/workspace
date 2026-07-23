
//C program to Add and Subtract of Two One Dimensional Array elements.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], add[n], sub[n];

    printf("Enter %d elements for first array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter %d elements for second array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for (i = 0; i < n; i++) {
        add[i] = arr1[i] + arr2[i];
        sub[i] = arr1[i] - arr2[i];
    }

    printf("Addition:\n");
    for (i = 0; i < n; i++)
        printf("%d ", add[i]);

    printf("\nSubtraction:\n");
    for (i = 0; i < n; i++)
        printf("%d ", sub[i]);
    printf("\n");

    return 0;
}
