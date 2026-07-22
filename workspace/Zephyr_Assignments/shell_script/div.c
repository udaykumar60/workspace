#include<stdio.h>
#include"div.h"
void division(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
    }
    return a / b;
}
