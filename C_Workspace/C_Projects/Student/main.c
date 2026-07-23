#include<stdio.h>
#include<stdlib.h>
#include "student.h"
int  main()
{
        int choice;
        float a,b;
        while(1)
        {

                menu();
                printf("Enter the choice for SMS: ");
                scanf("%d",&choice);
                if(choice==5)
		{
                        printf("\nUSER EXITED \n");
	                break;
		}
		else if(choice==1)
                {
                     add_stud();
                }
                else if(choice==2)
                {
                      update_stud();
                }
                else if(choice==3)
                {
			display_stud();                      
                }
		else if(choice==4)
                {
			delete_stud();
		}
		else
                {
                        printf("\nINVALID CHOICE\n");
                }


	}

	return 0;
}

