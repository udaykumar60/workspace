#include<stdio.h>
int main()
{
	//Write a program to check if a number is palindrome using do-while loop. //
	int n,pal=0,rem,m;
	printf("Ente rthe value of n \n");
	scanf("%d",&n);
	m=n;
	do
	{
		rem=n%10;
		pal=rem+(pal*10);
		n/=10;
	}
	while(n>0);
	printf("%d is %s \n",pal,(pal==m) ? "a pallindrome" : "not a pallindrome");
	return 0;
}
