#include<stdio.h>
#include<string.h>
#include "student.h"

stud list[MAX];
int count=0;

void menu()
{
	printf("\n------STUDENT MANAGEMENT SYSTEM----- \n");
	printf(" 1. ADD STUDENT DETAILD \n");
	printf(" 2. UPDATE STUDENT DETAILS \n");
	printf(" 3. DISPLAY STUDENT DETAILS \n");
	printf(" 4. DELETE STUDENT DETAILS \n");
	printf(" 5. EXIT \n");
	
}

void add_stud()
{
	if(count<MAX)
	{
		printf("Enter the roll number : ");
		scanf("%d",&list[count].rollno);
		printf("Enter the name : ");
		scanf("%s", list[count].name);
		printf("Enter the gpa : ");
		scanf("%f",&list[count].gpa);
		count++;
	}
	else
	{
		printf("\nTHE STUDENT MANAGEMENT LIST IF FULL \n");	
	}

}

void display_stud()
{
	if(count==0)

	{
		printf("\nNo details to be displayed\n");
		return;
	}
	for(int i=0;i<count;i++)
	{
		printf("\nROLL-NUMBER: %d \nNAME: %s \nGPA: %.2f \n",list[i].rollno,list[i].name,list[i].gpa);
	}
}


void update_stud()
{
	int roll_no;
	int found=0;
	printf("\nEntee the rollnumber for updating the student details: ");
	scanf("%d",&roll_no);
	for(int i=0;i<count;i++)
	{	
		if(list[i].rollno==roll_no)
		{
			printf("\nEnter the Updated name : ");
			scanf("%s", list[i].name);
			printf("\nEnter the UPdated gpa : ");
			scanf("%f",&list[i].gpa);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("\nNo details are found on the roll number %d \n",roll_no);
	}
}


void delete_stud()
{
	int roll_delete;
	int delete=-1;
	printf("\nEnter thr rollnumber to delete the data : ");
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



		
