//Program to get binary number of a decimal number.
#include <stdio.h>

int main() 
{
    int n, arr[32], i = 0;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("The Binary value is: 0");
        return 0;
    }
    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("The Binary is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    return 0;
}
