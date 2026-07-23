#include<stdio.h>
#define PI 3.14159
int main()
{
	//Define a macro PI and write a program to calculate the area of a circle using it.//
	float area;
	int r;
	printf("Enter the value of radius \n");
	scanf("%d",&r);
	area=PI * r * r;
	printf("The area of circle is :%f \n",area);
	return 0;
}
