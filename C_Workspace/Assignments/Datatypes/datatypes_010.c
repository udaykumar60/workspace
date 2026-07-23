#include<stdio.h>
int main()
{
	double radius,area;
	double PI=3.1428571428571428571;
	printf("Enter the radius of the circle \n");
	scanf("%lf",&radius);
	area = PI * radius* radius ;
	printf("Area of the Circle is : %lf \n",area);
	return 0;

}

