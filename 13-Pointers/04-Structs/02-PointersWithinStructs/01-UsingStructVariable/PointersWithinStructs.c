#include <stdio.h>
// DEFINING STRUCT
struct MyData
{
	int* rlk_ptr_i;
	int rlk_i;
	float* rlk_ptr_f;
	float rlk_f;
	double* rlk_ptr_d;
	double rlk_d;
};
int main(void)
{
	//variable declarations
	struct MyData data;
	//code
	data.rlk_i = 9;
	data.rlk_ptr_i = &data.rlk_i;
	data.rlk_f = 11.45f;
	data.rlk_ptr_f = &data.rlk_f;
	data.rlk_d = 30.121995;
	data.rlk_ptr_d = &data.rlk_d;
	printf("\n\n");
	printf("i = %d\n", *(data.rlk_ptr_i));
	printf("Adress Of 'i' = %p\n", data.rlk_ptr_i);
	printf("\n\n");
	printf("f = %f\n", *(data.rlk_ptr_f));
	printf("Adress Of 'f' = %p\n", data.rlk_ptr_f);
	printf("\n\n");
	printf("d = %lf\n", *(data.rlk_ptr_d));
	printf("Adress Of 'd' = %p\n", data.rlk_ptr_d);
	return(0);
}
