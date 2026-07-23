#include<stdio.h>
int main()
{
	//Write a program to check if a character is uppercase, lowercase, digit, or special character using switch-case.//
	char ch;
	int a;
	printf("Enter a character \n");
	scanf(" %c",&ch);
	a=ch;
	switch(a)
	{
		case '0'...'9':
			printf("%c is a digit \n",ch);
			break ;
		case 'A'...'Z':
			printf("%c is in Uppercase \n",ch);
			break;
		case 'a'...'z':
			printf("%c is i  lowercase \n",ch);
			break;
		default:
			printf("%c is a special character \n",ch);
	}
	return 0;
}
