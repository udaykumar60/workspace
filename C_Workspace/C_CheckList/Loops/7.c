//C program to print all Armstrong numbers from 1 to N.
#include <stdio.h>
#include <math.h>

int main() 
{
    int num;
    printf("Enter limit: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        int temp = i;
        int count = 0;
        int sum = 0;

        // Count digits
        while(temp > 0) {
            temp /= 10;
            count++;
        }

        // Calculate Armstrong sum
        temp = i;
        while(temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
