#include<stdio.h>
int main()
{
	//Write a program to check if a year is a leap year or not using nested if.//
	int n;
	printf("Enter the year\n");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				printf("%d  is a leap year\n",n);
			}
			else{
				printf("%d is not a leap year \n",n);
			}
	
		}
		else
			printf("%d is a leap year \n",n);
	}

	else
 	  printf("%d is not a leap year \n",n);
	return 0;
}
