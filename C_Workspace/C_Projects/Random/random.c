#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int game (int n)
{
    int num=(rand ()%n);;
    return num;
}

int main() {
    int m=0;
    srand(time(0));
    int choice;
    printf("---------GUESS THE NUMBER---------- \n");
    int n;
    printf("Enter the numer \n");
    scanf("%d",&n);
    int ch;
    printf("Enter the choice from 0 to %d \n",n);
    scanf("%d",&ch);
    choice=game(n);
    if(choice==ch && ch<=n)
    	  {
              printf("\nYOUR GUESS IS CORRECT \n");
          }
    else if(choice!=ch && ch<=n)
          {
          	  printf("\nYOUR GUESS IS INCORRECT \n");
          	  printf("\nTHE CORRECT ANSWER IS %d\n",choice); 
	  }
    else
          {
              printf("\nINVALID CHOICE , CHOOSE WITH IN THE RANGE \n");
              
	  }
      return 0;
    }


