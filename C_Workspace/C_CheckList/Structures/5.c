
//C Program to demonstrate structure pointer (structure with pointer) using user define function.

#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void printStudent(struct Student *ptr) {
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
}

int main() {
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printStudent(&s);

    return 0;
}
