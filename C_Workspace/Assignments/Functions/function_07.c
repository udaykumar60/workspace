//Write a function to find the maximum element in an array and return it. 
#include<stdio.h>
int maximum(int arr[],int a)
{
	int max=arr[0];
	for(int i=0;i<a;i++)
	{
		if( arr[i] > max)
		{
			max=arr[i];
		} 		
	}
	return max;
}

int main()
{
	int a=10;
	int arr[10]={741,852,963,789,456,123147,258,369,6786,45312};
	printf("%d is the maximum element in an array \n",maximum(arr, a));
	return 0;
}


