#include <stdio.h>
// DEFINING STRUCT
struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
} data; 
int main(void)
{
	//variable declarations
	int rlk_i_size;
	int rlk_f_size;
	int rlk_d_size;
	int rlk_struct_MyData_size;
	//code
	//Assigning Data Values To The Data Members Of 'struct MyData'
	data.rlk_i = 30;
	data.rlk_f = 11.45f;
	data.rlk_d = 1.2995;
	//Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.rlk_i);
	printf("f = %f\n", data.rlk_f);
	printf("d = %lf\n", data.rlk_d);
	//Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	rlk_i_size = sizeof(data.rlk_i);
	rlk_f_size = sizeof(data.rlk_f);
	rlk_d_size = sizeof(data.rlk_d);
	//Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size of 'i' = %d bytes\n", rlk_i_size);
	printf("Size of 'f' = %d bytes\n", rlk_f_size);
	printf("Size of 'd' = %d bytes\n", rlk_d_size);
	//Calculating Size (In Bytes) Of the entire 'struct Mydata'
	rlk_struct_MyData_size = sizeof(struct MyData);
		
		printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", rlk_struct_MyData_size);

	return(0);
}