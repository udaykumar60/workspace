#include<stdio.h>
#include "cal.h"

void menu()
{
	printf("\n--------CALCULATOR----------\n");
	printf(" 1. ADDTION \n");
	printf(" 2. SUBTRACTION \n");
	printf(" 3. MULTIPLICATION \n");
	printf(" 4. DIVISION \n");
	printf(" 5. EXIT \n");
}

float add(float a,float b)
{
	return a+b;
}

float sub(float a,float b)
{
	return a-b;

}

float mul(float a,float b)
{
	return a*b;
}

float divide(float a,float b)
{
	return a/b;
}

