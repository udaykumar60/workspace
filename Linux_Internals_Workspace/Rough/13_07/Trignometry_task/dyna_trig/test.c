#include<stdio.h>
#include "trig.h"
#include<math.h>

int main()
{
	double n;
	printf("Enter the values to get the trignometry values :");
	scanf("%lf",&n);
	printf("Sine is: %d",sine(n));
	printf("\nCosine is: %d",cosine(n));
	printf("\nTangent is: %d",tangent(n));
	printf("\nCosecant is: %d",cosec(n));
	printf("\nSecant is: %d",secant(n));
	printf("\nCotangent is: %d",cotangent(n));
	printf("\n");
	return 0;
}
