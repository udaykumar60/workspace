//WAP to display student details using a pointer to a structure.
#include<stdio.h>

struct detail
{
	char name[50];
	long int rollno;
	float cgpa;
};

int main()
{
	struct detail s={"Yash",322136414039,8.31};
	struct detail *ptr;
	ptr=&s;
	printf("The name of the student is :%s",ptr->name);
	printf("\n");
	printf("The rollnumber of the student is :%ld",ptr->rollno);
	printf("\n");
	printf("The cgpa of the student is :%.2f",ptr->cgpa);
	printf("\n");
	return 0;
}
