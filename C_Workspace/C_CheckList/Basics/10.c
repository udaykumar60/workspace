//Program to print size of variables using sizeof() operator.
#include <stdio.h>
#include <math.h>
int main() 
{
    float x;
    int y;
    char z;
    double a;
    printf("The size of integer variable is : %.d",sizeof(y));
    printf("\nThe size of float variable is : %d",sizeof(x));
    printf("\nThe size of char variable is : %d",sizeof(z));
    printf("\nThe size of double variable is : %ld",sizeof(a));
    return 0;
}
