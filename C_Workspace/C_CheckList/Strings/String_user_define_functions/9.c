//Program to count upper case and lower case characters in a string.
#include <stdio.h>

void lower_upper();

void lower_upper(char x[])
{
    int l,u;
    l=u=0;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
        {
            u++;
        }
        else if(x[i]>=97 && x[i]<=122)
        {
           l++;
        } 
        else
        {
         printf("");   
        }
    }
    printf("\nUpperCase Count:%d",u);
    printf("\nLowerCase Count:%d",l);
}

int main() 
{
    char s[50];
    printf("Enter the string: ");
    scanf("%s", s);
    lower_upper(s);
    return 0;
}
