
//Program to demonstrate example of array of pointers.

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3];  // Array of pointers

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    int i;
    for (i = 0; i < 3; i++) {
        printf("Value: %d, Address: %p\n", *arr[i], arr[i]);
    }

    return 0;
}
