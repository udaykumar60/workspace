#include<stdio.h>
int main()
{
	//Write a program to remove duplicate elements from a sorted array.//
	int arr[14]={1,2,3,4,5,5,6,6,7,7,8,9,10,10};
	int new_arr[14];
	int j=0;
	for(int i=0;i<14;i++)
	{
		if(i < 14 && arr[i]==arr[i+1])
			continue;
		else
			new_arr[j]=arr[i];
			j++;
	}
	for(int i=0;i<j;i++)
	{
		printf("%d ",new_arr[i]);
	}
	printf("\n");
	return 0;

}
