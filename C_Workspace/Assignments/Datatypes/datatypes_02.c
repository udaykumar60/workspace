#include<stdio.h>
int main()
{
	//Program for printing the size of basic datatypes//
	int a=12;
	float b=12.555;
	char c='C';
	double d =3.1452699877;

	printf("Size of an interger datatype is %zu \n",sizeof(a));
	printf("Size of an float datatype is %zu \n",sizeof(b));
	printf("Size of an charracter datatyoe is %zu \n",sizeof(c));
	printf("size of an double datatype is %zu \n",sizeof(d));

	return 0;
}

	
