#ifndef LIBRARY_H
#define LIBRARY_H
#define MAX 100

typedef struct
{
	int rollno;
	char name[200];
	char book_name[200];
	int id_book;
	int issue_date;
	int return_date;			
}stud;

void add_lib();
void update_lib();
void display_lib();
void delete_lib();
void menu();

#endif
