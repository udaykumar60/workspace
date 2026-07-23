#include <stdio.h>
int main()
{
    // Write a program to check if a triangle is valid based on three angles (sum = 180) using nested if. //
    
    int a, b, c;
    int sum = 0; 

    printf("Enter the angles in a triangle \n");
    scanf("%d%d%d", &a, &b, &c);

    
    if ((sum += a) < 180) 
    {
        
        if ((sum += b) < 180) 
        {
          
            if ((sum += c) == 180) 
            {
                printf("%d+%d+%d=180 hence its a valid triangle \n", a, b, c);
            }
            else 
            {
                printf("Sum of angles is %d, so not a valid triangle \n", sum);
            }
        }
        else 
        {
            printf("Sum of angles is greater than or equal to 180 before adding third angle \n");
        }
    }
    else 
    {
        printf("First angle alone is 180 or more, not a valid triangle \n");
    }

    return 0;
}
