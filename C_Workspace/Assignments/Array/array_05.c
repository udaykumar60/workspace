#include<stdio.h>
int main()
{
	//Write a program to reverse the elements of an array without using another array.//
	int arr[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

