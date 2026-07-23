#include<stdio.h>
#include<stdlib.h>
#include "cal.h"

int main()
{
	int choice;
	float a,b;
	while(1)
	{
		
		menu();
		printf("Enter the choice for calculation: ");
		scanf("%d",&choice);

		if (choice==5)
                {
                        printf("\nUSER EXITED \n");
                        break;
			system("clear");
                }
	
		if (choice<1 || choice>5)
                {
                        printf("---ERROR--- \n");
                        printf("Please choose from the menu \n");
			continue;
		}
		
		printf("\n");
                printf("Enter the two numbers : ");
                scanf("%f%f",&a,&b);


		if(choice==1)
		{
			printf("\nThe addition of %.2f and %.2f is : %.4f \n",a,b,add(a,b));
			continue;
		}
		else if(choice==2)
		{       
                        printf("\nThe subtraction of %.2f and %.2f is : %.4f \n",a,b,sub(a,b));
                        continue;
                }
		else if(choice==3)
		{
                        printf("\nThe multiplication of %.2f and %.2f is : %.4f \n",a,b,mul(a,b));
                   	continue;
                }
		else
		{
			if(a==0)
			{
				printf("\nNumerator is zero , so value is 0 \n");
				continue;
			}
			else if(b==0)
			{
				printf("\nDivision by zero is undefines (or) Infinity \n");
				continue;
			}
			else
			{
                        	printf("\nThe division  of %.2f and %.2f is : %.4f \n",a,b,divide(a,b));
                      		continue;
                	}
		}
		
	}

	return 0;

}

