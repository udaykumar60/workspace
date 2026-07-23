#include<stdio.h>
#include<string.h>
#include "library.h"

stud list[MAX];
int count=0;

void menu()
{
	printf("\n------LIBRARY MANAGEMENT SYSTEM----- \n");
	printf(" 1. ADD DETAILS \n");
	printf(" 2. UPDATE DETAILS \n");
	printf(" 3. DISPLAY DETAILS \n");
	printf(" 4. DELETE DETAILS \n");
	printf(" 5. LOG OUT \n");
	
}

void add_lib()
{
	if(count<MAX)
	{
		printf("\nEnter the roll number : ");
		scanf("%d",&list[count].rollno);
		printf("\nEnter the name of the student : ");
		scanf("%s", list[count].name);
		printf("\nEnter the name of the book: ");
		scanf("%s", list[count].book_name);
		printf("\nEnter the id of the book :");
		scanf("%d",&list[count].id_book);
                printf("\nEnter the issue date : ");
                scanf("%d",&list[count].issue_date);
                printf("\nEnter the return date: ");
                scanf("%d",&list[count].return_date);
		count++;
	}
	else
	{
		printf("\nTHE STUDENT MANAGEMENT LIST IF FULL \n");	
	}

}

void display_lib()
{
	if(count==0)

	{
		printf("\nNo details to be displayed\n");
		return;
	}
	for(int i=0;i<count;i++)
	{
		printf("\nROLL-NUMBER: %d \nNAME OF THE STUDENT: %s \nNAME OF THE BOOK: %s \nID OF THE BOOK: %d \nISSUE DATE: %d \nRETURN DATE: %d \n",list[i].rollno,list[i].name,list[i].book_name,list[i].id_book,list[i].issue_date,list[i].return_date);
	}
}


void update_lib()
{
	int roll_no;
	int found=0;
	printf("\nFor updating issue & return date\n");
	printf("\nEntee the rollnumber : ");
	scanf("%d",&roll_no);
	for(int i=0;i<count;i++)
	{	
		if(list[i].rollno==roll_no)
		{
			printf("\nEnter the Updated issue date : ");
			scanf("%d",&list[i].issue_date);
			printf("\nEnter the updated gretuen date: ");
			scanf("%d",&list[i].return_date);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("\nNo book is issued on the roll number %d \n",roll_no);
	}
}


void delete_lib()
{
	int roll_delete;
	int delete=-1;
	printf("\nTo delete the data of the student after returning the book \n");
	printf("\nEnter thr rollnumber: ");
	scanf("%d",&roll_delete);
	for(int i=0;i<count;i++)
	{
		if(list[i].rollno==roll_delete)
		{
			delete=i;
			break;
		}
	}
	if(delete!=-1)
		{
			for(int i=delete;i<count-1;i++)
			{

				list[i]=list[i+1];
			}
			count--;
			printf("\nSTUDENT DETAILS DELETED\n");
		}
	else
	{
		printf("\nNO DETAILS FOUND\n");
	}
}



		
