//WAP to compare two dates entered by the user.
#include<stdio.h>

struct user
{
	int a;
	int b;
};

int main()
{
	struct user c;
	printf("Enter the first date : ");
	scanf("%d",&c.a);
	printf("\n");
	printf("Enter the second date :");
	scanf("%d",&c.b);
	if (c.a == c.b)
	{
		printf("Both the dates are sam \n");
	}
	else 
	{
		printf("Not same \7n");
	}

	return 0;
}

