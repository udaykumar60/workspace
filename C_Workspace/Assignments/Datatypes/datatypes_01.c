#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
        double d;
	printf("Enter the value of a is \n ");
	scanf("%d",&a);
	printf("Enter the value of b is \n");
	scanf("%f",&b);
	printf("Enter the value of d is \n");
	scanf("%lf",&d);
	printf("Enter the value of c is \n");
	scanf(" %c",&c);



	printf("%d is an interger datatype \n",a);
	printf("%f is a float datatype \n",b);
	printf("%c is a character datatype \n",c);
	printf("%lf is a double datatype \n",d);
        
	return 0;
}





