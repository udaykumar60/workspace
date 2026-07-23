
//C program to find Smallest and Largest elements from One Dimensional Array Elements.

#include <stdio.h>

int main() {
    int n, i, smallest, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Smallest = %d\n", smallest);
    printf("Largest = %d\n", largest);

    return 0;
}
