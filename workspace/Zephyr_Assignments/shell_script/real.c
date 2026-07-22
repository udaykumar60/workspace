#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* get_user_input()
{
	char buffer[20];
	printf("Enter your name:");
	gets(buffer);
	return buffer;
}
int main()
{
	char *name=get_user_input();
	printf("HELLO,%s\n",name);
	return 0;
}
