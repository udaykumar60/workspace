/*print a specific pattern*/

#include<stdio.h>
int main()
{
	char a[100]={"a1b2c3d4@"};
	for(int i=0;i<100;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			printf(" %c",a[i]);
		}
		else if (a[i]>=1 &&a[i]<=9)
		{
			printf(" %c",a[i]);
		}
		else
		{
			printf(" %c",a[i]);
		}
	}
	return 0;
}

