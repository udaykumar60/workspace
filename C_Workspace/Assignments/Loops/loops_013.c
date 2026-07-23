#include<stdio.h>
int main()
{
	//Write a program to print all prime numbers between 1 and 100 using nested for loop.//
	int n=100;
	printf("Enter the number \n");
	scanf("%d",&n);
	for (int i=1;i<=100;i++)
	{
		for(int j=1;j*j<=100;j++)
		{
			
