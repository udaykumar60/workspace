#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p, n;

    printf("Enter the no. of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    // Dynamic memory allocation
    p = (int *) malloc(n * sizeof(int));
    
    // Check if allocation was successful
    if (p == NULL) {
        fprintf(stderr, "\nMemory allocation failed!\n");
        return 1; // Exit the program safely
    }

    // %p is the correct format specifier for pointers
    printf("Memory allocated at: %p\n", (void*)p); 
    
    // Note: malloc doesn't initialize memory, so these will be garbage values
    printf("Initial (garbage) values: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    
    // Assigning values
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }

    printf("\nAssigned values: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    // Always free dynamically allocated memory
    free(p); 

    return 0;
}
