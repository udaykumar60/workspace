//K-th rotation//
#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int i=0,j=0,n=0;
	printf("Entee the kth rotation position: ");
	scanf("%d",&n);
	for(i=n;i<5;i++)
	{
		printf("%d",a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}


