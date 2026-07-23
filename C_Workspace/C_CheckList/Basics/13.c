//Program to find area of a rectangle.
#include<stdio.h>
int main() 
{
    float area;
    float l,w;
    printf("Enter the value of Length is:");
    scanf("%f",&l);
    printf("Enter the value of Width is:");
    scanf("%f",&w);    
    area=l*w;
    printf("The aarea of a rectangle: %.2f",area);
    return 0;
}
