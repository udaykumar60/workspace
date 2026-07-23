#include<stdio.h>
#include "todo.h"

void printmenu()
{
	peintf("\n===== TODO MENU =====\n");
	printf("1. ADD TASK \n");
	printf("2. LIST OF TASKS \n");
	printf("3. MARK AD DONE \n");
	printf("4. DELETE TASK \n");
	printf("5. EXIT \n ");
	printf("=========================\n");
	printf("Enter the choice : ");

}

void addTodo(const char *task)
{

}

void listod todos();
void markdone(int index);
void deletetodo(int index);
