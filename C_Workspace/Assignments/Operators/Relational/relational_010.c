#include<stdio.h>
int main()
{
	//Compare two floating numbers for equality.//
	float a,b;
	printf("enter the values of a and b \n");
	scanf ("%f%f",&a,&b);
	if (a==b)
		printf("%f and %f are equal \n",a,b);
	else
		printf(" %f and %f are not equal \n",a,b);
	return 0;
}
