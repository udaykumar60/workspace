#include<stdio.h>
int main()
{
	//Write a program to find the maximum and minimum element in an array of 15 numbers//
	int n=15;
	int arr[n];
	for(int i=0;i<n;i++)
	{
          scanf("%d",&arr[i]);
	}
	int min,max;
	min=arr[0];
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("%d is the maximun value \n",max);
	printf("%d is the minimum value \n",min);
	return 0;
}

