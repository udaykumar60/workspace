#include<stdio.h>
int main()
{
	//Write a program to multiply a number by 2 using the left shift operator.//
	int n , m ;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	m=n<<1;
	printf(" The left shift of %d is : %d \n",n,m);
	return 0;
}
