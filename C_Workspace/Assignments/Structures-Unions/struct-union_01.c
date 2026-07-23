//WAP to store and display information of a student using a structure.
#include<stdio.h>
struct detail
{
	int rollno;
	char name[50];
	float marks;
};
int main()
{
	struct detail d[5]={{12,"Ali",74.5},
                            {25,"Amrutha",85.02},
                            {36,"Arafat",96.33},
                            {45,"Lohitha",99.4},
                            {85,"Revathi",73.01}};
	for(int i=0;i<5;i++)
	{
		printf("The roll number is :%d ",d[i].rollno);
		printf("\n");
		printf("The name is :%s ",d[i].name);
                printf("\n");
		printf("The marks  number is :%.2f ",d[i].marks);	
		printf("\n");
	}
	return 0;
}

