#include<stdio.h>
int main()
{
	//Write a program to check if a character is a vowel or consonant using switch-case.//
	char ch;
	printf("Enter the alphabet \n");
	scanf(" %c",&ch);
	switch(ch){

	case 'a':
	case 'A':
	case 'e':
        case 'E':	       
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is a vowel \n",ch);
         	break;

	default:
		printf("%c is a consonant \n",ch);
		break;
	}
	return 0;
}

