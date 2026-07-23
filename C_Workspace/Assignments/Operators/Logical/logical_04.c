#include<stdio.h>
int main()
{
	// Write a program to check whether a character is a vowel.//
	char ch;
	int c;
	printf("Enter the character \n");
	scanf(" %c",&ch)
		;c=ch;
	if(c==65 || c==97 || c==69 || c== 101 || c==73 || c==105 || c==79 || c==111 || c==85 || c==117)
		printf("%c is a vowel \n", ch);
	else
		printf(" %c is not a vowel \n ", ch);
	return 0;
}










