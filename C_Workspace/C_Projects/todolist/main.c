#include<stdio.h>
#include "todo.h"

int main()
{
	int choice;
	int index;
	char task[MAX-LEN];

	while(1)
	{
		printmenu();
		scand("%d",&choice);
		getchar();

		switch(choice)
		{
			case 1:
				printf("Enter the task \n");
							
