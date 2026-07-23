#include<stdio.h>
int main()
{
	//Write a program to calculate grade based on marks (A: 90+, B: 80+, C: 70+, D: 60+, Fail) using if-else-if.//
	int n;
	printf("Enter the marks\n");
	scanf("%d",&n);
	if(n==100)
		printf(" O grade \n");
	else if (n>=90 && n!=100)
		printf(" A grade \n");
	else if (n>=80 && n<=90)
		printf("B grade \n");
	else if (n>=70 && n<=80)
		printf("C grade\n");
	else if (n>=60 && n<=70)
		printf("D grade \n");
	else
		printf("Failed \n");

	return 0;

}
