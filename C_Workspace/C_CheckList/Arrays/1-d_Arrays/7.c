
//C program to find a number from array elements.

#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to find: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found %d at position %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Number not found in array\n");

    return 0;
}
