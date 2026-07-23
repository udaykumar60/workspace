
//C Program to demonstrate example structure pointer (structure with pointer).

#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s = {1, "Alice", 92.5};
    struct Student *ptr;

    ptr = &s;  // Pointer to structure

    printf("Using pointer:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
