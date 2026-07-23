
//C Program to demonstrate example of structure of array.

#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];  // Array of structures

    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- All Students ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}
