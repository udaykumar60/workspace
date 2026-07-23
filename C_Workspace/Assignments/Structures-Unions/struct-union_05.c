//WAP to find the area of a rectangle using structures for coordinates.
#include<stdio.h>

struct area
{
	float area;
	float l,b;
};

int main()
{
	struct area a;
	a.l=50.852;
	a.b=75.456;
	a.area=a.l*a.b;
	printf("The area of the rectangle is %.3f \n",a.area);
	return 0;
}
