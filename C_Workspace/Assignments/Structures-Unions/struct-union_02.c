//WAP to calculate the total marks of 5 students using an array of structures.
#include<stdio.h>

struct total
{
	int marks;
};
int main()
{
	struct total t[5]={85,96,74,45,78};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+t[i].marks;
	}
	printf("The total marks of 5 students is : %d",sum);
	printf("\n");
	return 0;
}

