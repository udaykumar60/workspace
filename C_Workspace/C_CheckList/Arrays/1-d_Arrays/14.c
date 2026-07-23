
//C program to delete given element from one dimensional array.

#include <stdio.h>

int main() {
    int n, i, key, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to delete: ");
    scanf("%d", &key);

    // Find position
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found\n");
    } else {
        // Shift elements left
        for (i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;

        printf("After deletion:\n");
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}
