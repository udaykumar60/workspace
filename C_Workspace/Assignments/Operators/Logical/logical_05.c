#include<stdio.h>
#include<string.h>
int main()
{ 
	//Check login validation using username and password (logical AND).//
	char ch[]="Yash";
	int a=1234;
	char user[20];
	int pass;
	printf("Entee the user name and password \n");
	scanf("%s %d",user,&pass);
	if (strcmp(ch, user) == 0 && a == pass)	
		printf("Access greanted \n");
	else
		printf("Wrong credentials \n");
	return 0;
}
