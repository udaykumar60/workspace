#include<stdio.h>
int main()
{
	//Check whether a person is eligible for voting (age >= 18).//
	int age;
	printf("enter the age\n");
	scanf("%d",&age);
	if(age>=18)
		printf("Person is eligible to vote\n");
	else 
		printf("Person not eligible for vote");
	return 0;
}
