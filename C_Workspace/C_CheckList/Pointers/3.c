
//Program to change the value of constant integer using pointers.

#include <stdio.h>

int main() {
    const int num = 100;
    int *ptr;

    printf("Before: num = %d\n", num);

    ptr = (int *)&num;  // Cast away const
    *ptr = 200;

    printf("After: num = %d\n", *ptr);

    return 0;
}
