#include<stdio.h>
int main()
{
	int b,a,cho;
	enum{add=1,sub,mul,div,mod};
	printf("\n MENU\n");
	printf("1. ADD \n");
	printf("2. SUB \n");
	printf("3. MUL \n");
	printf("4. DIV \n");
	printf("5. MOD \n");
	printf("enter the choice : ");
	scanf("%d",&cho);
	printf("\n");
	printf("Entee the a and b numbers : ");
	scanf("%d %d",&a,&b);
	printf("\n");

	switch(cho)
	{
		case add:
			printf("add is %d ",(a+b));
			printf("\n");
			break;
		case sub:
                        printf("sub is %d ",(a-b));
                        printf("\n");
                        break;
		case mul:
                        printf("mul is %d ",(a*b));
                        printf("\n");
                        break;
		case div:
                        printf("div is %d ",(a/b));
                        printf("\n");
                        break;
		case mod:
                        printf("mod is %d ",(a%b));
                        printf("\n");
                        break;
		default:
			printf("INVALID CHOICE ");
			break;	
       }
       return 0;
       }
	

