#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // It is CRITICAL to initialize 'p' to NULL so realloc knows it's a new allocation
    int *p = NULL; 
    int n;

    printf("Enter the no. of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    // Using realloc instead of malloc!
    // Because 'p' is NULL, this acts exactly like malloc(n * sizeof(int))
    p = (int *) realloc(p, n * sizeof(int));
    
    if (p == NULL) {
        fprintf(stderr, "\nFailed\n");
        return 1; 
    }

    printf("Memory allocated at: %p\n", (void*)p); 
    
    printf("\nInitial values: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }

    printf("\nAssigned values: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p); 

    return 0;
}
