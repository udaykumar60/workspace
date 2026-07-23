#include<stdio.h>
int main()
{
	//Write a program to print even numbers from 1 to 50 using for loop.//
	int i;
	for(i=1;i<=50;i++)
	{
		if(i%2==0){
			printf("The even numbers from 1-50 are %d \n",i);
		}
	
	}
	return 0;
}
