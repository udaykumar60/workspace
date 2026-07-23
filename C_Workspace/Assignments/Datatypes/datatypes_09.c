#include<stdio.h>
int main()
{
	//Conversion of celcius into fahrenheit//
	float celcius,fahrenheit;
	printf("Enter the temperature in celcius");
	scanf("%f",&celcius);
	fahrenheit=((celcius*1.8)+32);
	printf("The temperature in fahrenheit is :%f \n",fahrenheit);
	return 0;
}
