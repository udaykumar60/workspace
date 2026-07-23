//PRINT ASCII VALUES OF A STRING//
#include <stdio.h>

int main() 
{
    int b;    
    char a[] = "i AM yASWANTH";
    
    printf("The ASCII values of the string are :\n");
    
    // Loop through each character until the end of the string
    for(int i = 0; a[i] != '\0'; i++)
    {
        // Store the character into an integer variable to see its ASCII value
        b = a[i]; 
        
        // Print the decimal value followed by a tab for spacing
        printf("%d\t", b);
    }
    
    printf("\n");
    return 0;
}
