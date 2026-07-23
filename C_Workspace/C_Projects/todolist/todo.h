#ifndef TODO_H
#define TODO_H

#define MAX_TASKS 200
#define MAX_LEN 200

typedef struct
{
	char task[MAX-LEN];
}Todo;

extern Todo todos[];
extern int count;


void addTodo(const char *task);
void listod todos();
void markdone(int index);
void deletetodo(int index);

void printmenu();

#endif
