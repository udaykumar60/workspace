#include<stdio.h>
#include<math.h>
int main()
{
	//Write a program to check whether a number is Armstrong using arithmetic operators.//
	int n,m,rem,count;
	int arm=0;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Enter the count value \n");
        scanf("%d",&count);
	m=n;
	while(n>0)
	{
	  	rem=n%10;
		arm=arm+pow(rem,count);
		n=n/10;
	}
	if(m==arm)
		printf("%d is an Armstrong Number \n",arm);
	else
		printf("%d is not an Armstrong Number\n",arm);
	return 0;

}
