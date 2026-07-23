// Program to convert temperature from Fahrenheit to Celsius and vice versa.
#include <stdio.h>

int main() 
{
    float c, f, result_f, result_c;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    result_f = (c * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", result_f);
    printf("\nEnter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    result_c = (f - 32.0) * (5.0 / 9.0);
    printf("Temperature in Celsius: %.2f\n", result_c);
    return 0;
}
