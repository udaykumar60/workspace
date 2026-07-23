//Write a function that takes an array and its size and prints all elements. //
#include<stdio.h>
int array(int arr[],int a)
{
	int i;
	printf("The values in an array are :");
	for(i=0;i<a;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
	int size=10;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	array(arr,size);
	return 0;
}

