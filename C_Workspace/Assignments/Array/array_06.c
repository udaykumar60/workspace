#include<stdio.h>
int main()
{
	//Write a program to sort an array in ascending order using bubble sort. //
 	int n=5;
	int arr[n];
	int i,j,temp;
	printf("Enter 5 number \n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted array in acending order : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}



