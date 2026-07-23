
//Program to demonstrate example of double pointer (pointer to pointer).

#include <stdio.h>

int main() {
    int num = 50;
    int *ptr;       // Single pointer
    int **dptr;     // Double pointer

    ptr = &num;
    dptr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Using *ptr: %d\n", *ptr);
    printf("Using **dptr: %d\n", **dptr);

    printf("\nAddress of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value of *dptr: %p\n", *dptr);
    printf("Value of dptr: %p\n", dptr);

    return 0;
}
