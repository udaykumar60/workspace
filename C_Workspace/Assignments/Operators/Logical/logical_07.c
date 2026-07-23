#include<stdio.h>
int main()
{
	//Check whether a student passed (marks >= 35 in all subjects).//
	int a,b,c,d;
	printf("enter the marks of Language,Maths,Physics,Chemistry,English \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>=35 && b>=35 && c>=35 && d>=35)
		printf("Student Passed in all subjects \n");
	else
		printf("Student failed  \n");

	return 0;
}

