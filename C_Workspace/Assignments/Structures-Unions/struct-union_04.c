//WAP to store and display Employee records (Name, ID, Salary) using structures.//
#include<stdio.h>

struct details
{
	char name[50];
	int id;
	double salary;
};
int main()
{
	struct details d[5]={
		{"Yaswanth",2406,123654},
		{"Uday",74,741852},
		{"Mojesh",85,963852},
		{"Adithya",12,4567452},
		{"Sai",007,9999999}};
	for(int i=0;i<5;i++)
	{
		printf("Name :- %s",d[i].name);
		printf("\n");
		printf("Id   :- %d",d[i].id);
		printf("\n");
		printf("Salary :- %f",d[i].salary);
		printf("\n");
	}
	return 0;
}

