// ARMSTRONG IN A GIVEN RANGE //
#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    printf("enter the range: ");
    scanf("%d",&n); // Take the maximum range from the user
    
    printf("The armstrong numbers are: ");
    
    // Outer loop to check every number from 1 to n
    for(int i=1; i<=n; i++)
    {
        int temp = i;
        int sum = 0;
        int count = i;
        int digits = 0;
        
        // Step 1: Count how many digits are in the current number 'i'
        while(count > 0)
        {
            count = count / 10;
            digits++;
        }
    
        temp = i; // Reset temp to the original number
        
        // Step 2: Calculate the sum of digits raised to the power of 'digits'
        while(temp > 0)
        {
            int digit = temp % 10; // Get the last digit
            sum += pow(digit, digits); // Add digit^digits to the sum
            temp = temp / 10; // Remove the last digit
        }
        
        // Step 3: If the sum equals the original number, it is an Armstrong number
        if(sum == i)
        {
            printf("%d\t", i);
        }
    }
    
    printf("\n");
    return 0; // End of program
}
