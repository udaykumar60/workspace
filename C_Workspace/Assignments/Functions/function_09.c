//Write a function that takes two strings and returns 1 if they are equal, else 0. 
#include<stdio.h>
#include<string.h>
void string(char a[], char b[])
{
	if(strcmp(a,b)==0)
	{
		printf("Both strings are equal \n");
	
	}
	else
	{
		printf("Both the strings are not equal \n");
	}
}

int main()
{
	char a[50]="HI";
	char b[50]="HI";
	string(a,b);

	return 0;
}

