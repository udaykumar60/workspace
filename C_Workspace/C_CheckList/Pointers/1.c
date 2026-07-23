
// Program to create, initialize, assign and access a pointer variable.

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;       // Create pointer

    ptr = &num;     // Assign address

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    // Modify value using pointer
    *ptr = 20;
    printf("After *ptr = 20, num = %d\n", num);

    return 0;
}
