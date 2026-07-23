#ifndef STUDENT_H
#define STUDENT_H
#define MAX 100

typedef struct
{
	int rollno;
	char name[200];
	float gpa;
}stud;

void add_stud();
void update_stud();
void display_stud();
void delete_stud();
void menu();

#endif
