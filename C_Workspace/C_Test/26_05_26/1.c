//String/number pallindrome check

#include<stdio.h>
#include<string.h>

void pal(int n);
void menu();


int main()
{
	menu();
	int x;
	printf("Enter the choice:");
	scanf("%d",&x);
	pal(x);
}

void menu()
{
	printf("\n1. Check if String is palindrome or not\n");
	printf("\n2. Check if number is palindrome or not \n");
}

void pal(int n)
{
	if(n==1)
	{
	          int m,x,y;
		  printf("\nEnter the number to check if its palindrome or not :");
		  scanf("%d",&m);
		  int a=m;
		  while(m>0)
		  {
			  x=m%10;
			  y=x+(y*10);
			  m/=10;
		  }
		  if(y==a)
		  {
			  printf("\nPalindrome Number\n");
		  }
		  else
		  {
			 printf("\nNot a palindrome number\n");  
		  }
	}
	else
	{
		  char n[100],x[100];
                  printf("\nEnter the string to check if its palindrome or not :");
                  scanf("%s",&n);
		  int len= strlen(n);
		  for(int i=len-1;i>=0;i--)
		  {
			   x[i]=n[i];
		  }
		  if(strcmp(x,n)==0)
		  {
			  printf("\nString is palindrome\n");
		  }
		  else
		  {
			  printf("\nThe string is not palindrome\n");
		  }
	}
}



