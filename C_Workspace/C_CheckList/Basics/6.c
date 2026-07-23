//Program to find gross salary of an employee.
#include <stdio.h>

int main() 
{
    float a,b,c;
    float sum=0;
    printf("Enter the Base Salary:");
    scanf("%f",&a);
    printf("Enter the Side Income:");
    scanf("%f",&b);
    printf("Enter the Other Incomes:");
    scanf("%f",&c);
    sum=a+b+c;
    printf("The Gross Salary is: %.2f",sum);

}
