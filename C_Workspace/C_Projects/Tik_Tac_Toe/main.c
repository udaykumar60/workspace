//TIK TAC TOE//

#include<stdio.h>

void menu()
{
	
	printf("\n==========TIC TAC TOE==========\n");
	printf("Select from the option\n");
	printf("1. X\n");
	printf("2. O\n");
}

void game(int c)
{
	switch(c)
	{
		case 1:
			printf("\nUser chose : X \n");
			break;
		case 2:
			printf("\nUser chose : O \n");
			break;
		default:
			printf("\nINVALID CHOICE\n");
	}
}


int main()
{
	menu();
	int ch;
	printf("\n");
	scanf("%d",&ch);
	game(ch);
	int ttt[3][3]={0};
	int user_1,user_2;
	int moves=0;
	int won=0;

	printf("\n ___|___|___\n ___|___|___\n    |   |\n");

	return 0;
}

