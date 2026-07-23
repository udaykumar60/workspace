#include<stdio.h>
int main()
{
	//Write a program to determine the type of triangle (equilateral, isosceles, scalene) based on sides using nested if.//
	int a,b,c;
	printf("Enter the sides of triangle \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0)
		if(a==b)
			if(b==c)
				printf("Its an Equilateral  Triangle \n");
			else
				printf("its an Isossceles Triangle \n");
		else
			if(a==b || b==c || c==a)
				printf("Its an Isoscelus triangle\n");
			else
				printf("Its an Scalene triangle \n");
	else
		printf("Invalid values \n");

	return 0;
}
