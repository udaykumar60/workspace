//Program to get minimum number of bits to store an integer number.
#include <stdio.h>

int main() 
{
    int n,count=0;
    printf("Enter the  number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("The bits to store an integer number: 1");
        return 0;
    }
        while (n > 0) 
        {
            n = n >> 1;
            count++;
        }
        printf("The bits to store an integer number: %d",count);
}
