#include<stdio.h>
int main()
{
	 //Check whether a character is an alphabet or digit.//
	 char ch;
	 int c;
	 printf("Enter the character \n");
	 scanf(" %c",&ch);
	 c=ch;
	 if(c>= 48 && c<= 57)
		 printf(" %c is a digit \n",ch);
	 else if (c>=65 && c<=90 || c>= 97 && c<=122)
		 printf(" %c is a alphabet \n",ch);
	 else
		 printf("%c is a special cahracter \n",ch);

	 return 0;
}

