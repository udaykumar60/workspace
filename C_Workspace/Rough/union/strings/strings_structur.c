#include<stdio.h>
struct book{
	char title[100];
	float val;
};
int main()
{
	struct book b={"let u c",300.00};
	printf("%s %.3f \n",b.title,b.val);
	return 0;
}
