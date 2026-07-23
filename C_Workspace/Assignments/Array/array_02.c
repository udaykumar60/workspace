#include<stdio.h>
int main()
{
	//Write a program to find the sum and average of elements in an integer array. //
	int n;
	int rem=0;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		rem=rem+arr[i];
		
	}
	float avg=(float)rem/n;
	printf("the sum of numbers in a array is %d \n",rem);
	printf("the average of numbers in the array is %f \n",avg);

	return 0;

}
