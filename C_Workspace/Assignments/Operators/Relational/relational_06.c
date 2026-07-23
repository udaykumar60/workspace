#include<stdio.h>
int main()
{
	//Check the year is leap year //
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	if(year%4==0)
		printf("%d is a leap year \n",year);
	else
		printf(" %d is not aleap year \n",year);

	return 0;
}
