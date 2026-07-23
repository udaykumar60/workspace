#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int game ()
{
    int num=(rand ()%3)+1;
    return num;
}

int main() {
    srand(time(0));
    int choice;
    printf("\n---------------STONE PAPER SCISSOR---------------\n");
    printf("\t 1.STONE\n \t 2.PAPER\n \t 3.SCISSOR\n \t 4.QUIT");
    printf("\nEnter the choice :\n");
    int ch;
    scanf("%d",&ch);
    choice=game();
    switch(ch)
    {
        case 1:
         if(choice==1)
          {
              printf("Computer choice is STONE \n ITS A TIE \n");
          }
          else if(choice==2)
          {
              printf("Computer choice is PAPER \n COMPUTER WINS \n");
          }
          else
          {
              printf("Computer choice is SCISSOR \n PLAYER WINS \n");
          }
          break;
          
        case 2:
         if(choice==1)
          {
              printf("Computer choice is STONE \n PLAYER WINS \n");
          }
          else if(choice==2)
          {
              printf("Computer choice is PAPER \n ITS A TIE \n");
          }
          else
          {
              printf("Computer choice is SCISSOR \n COMPUTER WINS \n");
          }
          break;
        case 3 :
         if(choice==1)
          {
              printf("Computer choice is STONE \n COMPUTER WINS \n");
          }
          else if(choice==2)
          {
              printf("Computer choice is PAPER \n PLAYER WINS \n");
          }
          else
          {
              printf("Computer choice is SCISSOR \n ITS A TIE \n");
          }
         break;
	case 4:
	 	printf("\nUSER QUIT\n");
	break;
        default:
        printf("INVALID CHOICE , SELECT FROM THE ABOVE OPTIONS ONLY \n");
	}    

    return 0;
}
