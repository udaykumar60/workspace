
//C Program to declare, initialize an union, example of union.

#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 3.14;
    printf("d.f = %.2f\n", d.f);

    d.c = 'A';
    printf("d.c = %c\n", d.c);

    // Note: only last assigned value is valid in union
    printf("\nAfter assigning char:\n");
    printf("d.i = %d (corrupted)\n", d.i);
    printf("d.f = %.2f (corrupted)\n", d.f);
    printf("d.c = %c (valid)\n", d.c);

    printf("\nSize of union: %lu bytes\n", sizeof(d));

    return 0;
}
