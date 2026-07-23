//reverse of a string and common elements in the string//

#include<stdio.h>
#include<string.h>

void rev();

int main()
{
	rev();
	return 0;
}

void rev()
{
	char s[100];
	printf("enter the string:");
	scanf("%s",&s);
	int len =strlen(s);
	char x[100];
	int y=0;
	for(int i=len-1;i>=0;i--)
	{
		x[y]=s[i];
		y++;
	}
	printf("\nReversed String:%s",x);
	printf("\nCommom Elements in the string:");
	int count=0;
	for(int k=0;k<len-1;k++)
	{
		for(int j=k+1;j<len-1;j++)
			{
				if(s[k]==s[j])
				{	
					printf("%c ",s[j]);
					count++;
				}
			}
			printf("\n");
	}
	if(count==0)
	{
		printf("are none\n");
	}
}


