#include<stdio.h>

// Changed return type to void since we only print inside
void factor(int n) 
{
    int count = 0;
    // Changed i < n to i <= n to include the number itself
    for(int i = 1; i <= n; i++) 
    {
        if(n % i == 0)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\nTotal Count: %d\n", count);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    factor(n);
    return 0;
}
