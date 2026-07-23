
//C program to find occurrence of an element in one dimensional array.

#include <stdio.h>

int main() {
    int n, i, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to count: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    printf("%d occurs %d times\n", key, count);

    return 0;
}
