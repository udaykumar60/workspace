#include<stdio.h>
int main()
{
	//Write a program to validate triangle (sum of angles = 180).//
	int a,b,c,sum;
	printf("Enter the angles in a triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum<=180)
		printf("its a valid triangle with angles % d %d %d \n",a,b,c);
	else
		printf("Its an invalid triangle \n");
	return 0;
}
