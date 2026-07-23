#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
char* get_user_input() {
    // Adding 'static' keeps the memory alive even after the function exits!
    static char buffer[20]; 
    
    printf("Enter your name: ");
    
    // Replacing gets() with fgets() to prevent crashes from long names
    fgets(buffer, sizeof(buffer), stdin); 
    
    // Clean up the trailing newline character added by fgets
//    buffer[strcspn(buffer, "\n")] = '\0';

    return buffer; 
}

int main() {
    char *name = get_user_input();
    printf("Hello, %s\n", name);
    return 0;
}
*/

int main()
{
	int *ptr=NULL;
	*ptr=10;
	printf("%d",*ptr);
	return 0;
}

