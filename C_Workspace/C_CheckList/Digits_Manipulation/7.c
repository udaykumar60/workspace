//C Program to print occurrence of a particular digit in a number.
#include <stdio.h>

int main()
{
    int n, digit, count = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);
    
    int temp = n;
    while(temp > 0)
    {
        if(temp % 10 == digit)
        {
            count++;
        }
        temp = temp / 10;
    }
    
    printf("Digit %d occurred %d times in %d.", digit, count, n);
    return 0;
}
