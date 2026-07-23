#include<stdio.h>

//Find sum of all elements//

void add(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of all thw elements in the array :%d\n",sum);
}

int main()
{
	int n;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("\nthe elements in the array are: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	add(a,n);
	return 0;
}

