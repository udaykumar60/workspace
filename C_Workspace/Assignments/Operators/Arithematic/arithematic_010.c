#include<stdio.h>
int main()
{
	//Find area and perimeter of rectangle using arithmetic operators.//
	float area,per,base,ht,a,b,c;
	printf("Enter the value of side a :\n");
      	scanf("%f",&a);
	printf("Enter the value of side b : \n");
      	scanf("%f",&b);
       	printf("Enter the value of sice c : \n");
      	scanf("%f",&c);
      	printf("Enter the base value : \n");
   	scanf("%f",&base);	
       	printf("Enter the height value : \n");
	scanf("%f",&ht);
	per=(a+b+c);
	area=(0.5*base*ht);
	printf("The area of a triangle is : %f \n",area);
	printf("The perimeter of the triangle is : %f \n",per);
	return 0;
}
