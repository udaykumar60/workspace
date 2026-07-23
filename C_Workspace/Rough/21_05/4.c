#include<stdio.h>

void menu();
int add(int,int);
int sub(int,int);
int div(int,int);
int mul(int,int);
int sq(int);

int a,b;
int result;

int main()
{
	menu();
	int (*fun)(int,int)=0;
	int ch;
	printf("Enter the choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the numbers to perform add :");
			scanf("%d%d",&a,&b);
			fun=add;
			result=(*fun)(a,b);
			printf("The add of two numbers is :%d\n",result);
			break;
                case 2:
                        printf("Enter the numbers to perform sub :");
                        scanf("%d%d",&a,&b);    
                        fun=sub;
                        result=(*fun)(a,b);
                        printf("The sub of two numbers is :%d\n",result);
                        break;
              /*  case 5:
                        printf("Enter the numbers to perform square :");
                        scanf("%d",&a);    
                        fun=sq;
                        result=(*fun)(a);
                        printf("The square of two numbers is :%d\n",result);
                        break;*/
                case 3:
                        printf("Enter the numbers to perform mul :");
                        scanf("%d%d",&a,&b);    
                        fun=mul;
                        result=(*fun)(a,b);
                        printf("The add of two numbers is :%d\n",result);
                        break;
                case 4:
                        printf("Enter the numbers to perform div:");
                        scanf("%d%d",&a,&b);    
                        fun=div;
                        result=(*fun)(a,b);
                        printf("The div of two numbers is :%d\n",result);
                        break;
		default:
			printf("INVAID CHOICE\n");

	}
}

void menu()
{
        printf("====calculator=====\n");
        printf("1. ADD\n");
        printf("2. SUB\n");
        printf("3. MUL\n");
        printf("4. DIV\n");
        printf("5. SQUARE\n");
	printf("6. QUIT\n");
}

int add(int x,int y)
{
	return x+y;
}

int sub(int x,int y)
{
        return x-y;
}

int mul(int x,int y)
{
        return x*y;
}

int div(int x,int y)
{
        return x/y;
}

int sq(int x)
{
        return x*x;
}


