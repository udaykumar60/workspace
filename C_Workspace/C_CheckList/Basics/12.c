//Program to find area and perimeter of circle.
#include<stdio.h>
int main() 
{
    float area,per;
    float r;
    double pi=3.14159265359;
    printf("Enter the value of radius is:");
    scanf("%f",&r);
    area=pi*r*r;
    per=2*pi*r;
    printf("The area of of circle is : %.2f",area);
    printf("\nThe perimeter of of circle is : %.2f",per);
    return 0;
}
