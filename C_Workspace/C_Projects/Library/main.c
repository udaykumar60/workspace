#include<stdio.h>
#include<stdlib.h>
#include "library.h"
int  main()
{
        int choice;
        while(1)
        {

                menu();
                printf("\nEnter the choice for LMS: ");
                scanf("%d",&choice);
                if(choice==5)
		{
                        printf("\nLOGGED OUT\n");
	                break;
		}
		else if(choice==1)
                {
                     add_lib();
                }
                else if(choice==2)
                {
                      update_lib();
                }
                else if(choice==3)
                {
			display_lib();                      
                }
		else if(choice==4)
                {
			delete_lib();
		}
		else
                {
                        printf("\nINVALID CHOICE\n");
                }


	}

	return 0;
}

