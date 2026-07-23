//Constant pointer//

#include<stdio.h>

int main()
{

	//Address is constant//
	int const *a;
	int b=10,c=20;
	
	a=&b;
	printf("%d\n",*a);
	printf("%p\n",a);

	a++;

        a=&c;
        printf("%d\n",*a);
        printf("%p\n",a);

	
	//Value is constant//
	int y=10,z=20;
        int *const x=&y;      //  int y=10,z=20;

        x=&y;
        printf("%d\n",*x);
        printf("%p\n",x);

        (*x)++;

        x=&z;
        printf("%d\n",*x);
        printf("%p\n",x);

	return 0;

}
