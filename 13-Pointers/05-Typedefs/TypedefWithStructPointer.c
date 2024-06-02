#include <stdio.h>
// DEFINING STRUCT
struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
};
int main(void)
{
	//variable declarations
	int rlk_i_size;
	int rlk_f_size;
	int rlk_d_size;
	int rlk_struct_MyData_size;
	int rlk_pointer_to_struct_MyData_size;
	typedef struct MyData* MyDataPtr;
	MyDataPtr rlk_pData;
	//code
	printf("\n\n");
	rlk_pData = (MyDataPtr)malloc(sizeof(struct MyData));
	if (rlk_pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'sturct MyData' !!! EXITTING NOW ...\n\n");
			exit(0);
	}
	else
			printf("SUCCESSFULLY ALLOCATED MEMORY TO 'sturct MyData' !!!\n\n");

	rlk_pData->rlk_i = 30;
	rlk_pData->rlk_f = 11.45f;
	rlk_pData->rlk_d = 1.2995;

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", rlk_pData->rlk_i);
	printf("f = %f\n", rlk_pData->rlk_f);
	printf("d = %lf\n", rlk_pData->rlk_d);

	rlk_i_size = sizeof(rlk_pData->rlk_i);
	rlk_f_size = sizeof(rlk_pData->rlk_f);
	rlk_d_size = sizeof(rlk_pData->rlk_d);
	
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("Size of 'i' = %d bytes\n", rlk_i_size);
	printf("Size of 'f' = %d bytes\n", rlk_f_size);
	printf("Size of 'd' = %d bytes\n", rlk_d_size);

	rlk_struct_MyData_size = sizeof(struct MyData);
	rlk_pointer_to_struct_MyData_size = sizeof(MyDataPtr);

	printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", rlk_struct_MyData_size);
	printf("Size of pointer to 'struct MyData' : %d bytes\n\n",rlk_pointer_to_struct_MyData_size);
	if (rlk_pData)
	{
		free(rlk_pData);
		rlk_pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFUL FREED !!!\n\n");
	}
	return(0);
}
