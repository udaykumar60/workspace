#include<stdio.h>
int main()
{
	//Check whether a character is uppercase or lowercase.//
	char ch ;
	int c;
	printf("enter the character\n"	);
	scanf(" %c",&ch);
	c=ch;
	if(c>=65 && c<=90)
		printf(" %c  character is in upper case \n",ch);
	else if( c>=97 && c<=122)
		printf(" %c character is in lowercase \n",ch);
	else 
		printf(" %c character is neither upper ofr lower case\n",ch);
	return 0;
}

