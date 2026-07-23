//WAP to add two Complex Numbers by passing structure to a function.
#include<stdio.h>

struct cmplx
{
	float real;
	float img;
};

void add( struct cmplx a, struct  cmplx b)
{
	float r=a.real+b.real;
	float i=a.img+b.img;
	printf("The sum of two complex numbers is : %.2f+%.2fi \n",r,i);
}
int main()
{
	struct cmplx c,d;
	printf("Enter the real and imaginary values for 1st number :");
	scanf("%f%f",&c.real,&c.img);
	printf("\n");
	printf("Enter the real and imaginary values for 2nd number :");
        scanf("%f%f",&d.real,&d.img);
	printf("\n");
	add(c,d);
	return 0;
}
