#include<stdio.h>
int main()
{
	//Convert seconds into hours, minutes, and seconds.//
	float s,h,m;
	printf("enter the seconds \n");
	scanf("%f",&s);
	m=s/60;
	h=m/60;
	printf("%f seconds in minutes is: %f \n",s,m);
	printf("%f seconds in hours is: %f \n",s,h);

	return 0;

}

