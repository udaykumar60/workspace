
//C Program to demonstrate example of nested structure.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int id;
    char name[50];
    struct Date dob;  // Nested structure
};

int main() {
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter DOB (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("DOB: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
