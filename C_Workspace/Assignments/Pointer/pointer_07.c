#include<stdio.h>
int main()
{
	//WAP to reverse a string using pointers.//
	char arr[5]="YASH\0";
	char *ptr=arr;
	for(int i=5;i>`=0;i--)
	{
		printf(" %c",*(ptr +i));		
	}
	printf("\n");
	return 0;
}



