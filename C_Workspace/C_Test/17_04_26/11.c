// NUMBER CHECK MENU //
#include <stdio.h>

int main() {
    int n;
    
    // Infinite loop to keep the menu running until option 5 is chosen
    while(1)
    {
        printf("\n");
        printf("==========MENU==========");
        printf("\n1. SUM OF THE NUMBER\n2. PRIME CHECK\n3. FIBONACCI (Factorial in Menu)\n4. REVERSE NUMBER\n5. EXIT\n");
        printf("\nEnter the choice: ");
        scanf("%d",&n);

        switch(n)
        {
            case 1: // Calculate sum of individual digits
            {
                int sum=0, a, b, c;
                printf("\nEnter the number: ");
                scanf("%d",&a);
                c=a; // Store original value
                while(a>0)
                {
                    b=a%10;    // Get last digit
                    sum=sum+b; // Add to sum
                    a=a/10;    // Remove last digit
                }
                printf("\nThe sum of the number %d is : %d\n",c,sum);
                break;
            }

            case 2: // Check if number is prime (only 2 factors: 1 and itself)
            {
                int a, c=0;
                printf("\nEnter the number: ");
                scanf("%d",&a);
                for(int i=1; i<=a; i++)
                {
                    if(a%i==0) c++; // Increment count if divisible
                }
                if(c==2) printf("\nPRIME NUMBER\n");
                else printf("\nNOT A PRIME NUMBER\n");
                break;
            }

            case 3: // Fibonacci series generation logic
            {
                int a, c=0, b=1, fib;
                printf("\nEnter the range: ");
                scanf("%d",&a);
                printf("\nThe Fibonacci series is: ");
                for(int i=0; i<=a; i++)
                {
                    printf("%d\t",c);
                    fib=c+b;
                    c=b;
                    b=fib;
                }
                printf("\n");
                break;
            }

            case 4: // Reverse the digits of a number
            {
                int rem=0, rev=0, a; // Initialize rev=0 to avoid garbage values
                printf("\nEnter the number: ");
                scanf("%d",&a);
                while(a>0)
                {
                    rem=a%10;
                    rev=rev*10+rem; // Shift digits left and add new remainder
                    a/=10;
                }
                printf("\nThe reverse of the number is : %d\n",rev);
                break;
            }

            case 5: // Terminate the program
            {
                printf("\n==========EXITING==========\n");
                return 0;
            }

            default: // Handle inputs that aren't 1-5
            {
                printf("\n==========INVALID CHOICE==========\n");
            }
        }
    }
    return 0;
}
