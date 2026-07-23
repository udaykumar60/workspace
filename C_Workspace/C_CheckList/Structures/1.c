
//C Program to create, declare and initialize structure.

#include <stdio.h>

// Declare structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Initialize structure
    struct Student s1 = {1, "John", 85.5};

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
