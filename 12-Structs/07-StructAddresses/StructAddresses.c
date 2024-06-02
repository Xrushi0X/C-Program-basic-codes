#include <stdio.h>
struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
};
int main(void)
{
	//variable declarations
	struct MyData data;
	//code
	//Assigning Data Values To The Data Members Of 'struct MyData'
	data.rlk_i = 30;
	data.rlk_f = 11.45f;
	data.rlk_d = 1.2995;
	data.rlk_c = 'A';
	//Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.rlk_i);
	printf("f = %f\n", data.rlk_f);
	printf("d = %lf\n", data.rlk_d);
	printf("c = %c\n\n", data.rlk_c);
	printf("\n\n");
	printf("ADDRESSES OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("'i' Occupies Addresses From %p\n", &data.rlk_i);
	printf("'f' Occupies Addresses From %p\n", &data.rlk_f);
	printf("'d' Occupies Addresses From %p\n", &data.rlk_d);
	printf("'c' Occupies Address %p\n\n", &data.rlk_c);
	printf("Starting Address Of 'struct MyData' variable 'data' = %p\n\n", &data);
	return(0);
}

