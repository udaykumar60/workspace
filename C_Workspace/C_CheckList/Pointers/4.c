
//Program to print a string using pointer.

#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    printf("String using pointer: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
