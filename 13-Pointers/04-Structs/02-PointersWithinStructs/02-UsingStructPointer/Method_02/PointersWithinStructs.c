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
	struct MyData* pData = NULL;
	//code
	printf("\n\n");
	pData = (struct MyData*)malloc(sizeof(struct MyData));
	if (pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'struct MyData' !!! EXITTING NOW \n\n");
			exit(0);
	}
	else
			
 printf("SUCCESSFULLY ALLOCATED MEMORY TO 'struct MyData' !!!\n\n");
	pData->rlk_i = 9;
	pData->rlk_ptr_i = &(pData->rlk_i);
	pData->rlk_f = 11.45f;
	pData->rlk_ptr_f = &(pData->rlk_f);
	pData->rlk_d = 30.121995;
	pData->rlk_ptr_d = &(pData->rlk_d);
	  
	  
	  printf("\n\n");
	printf("i = %d\n", *(pData->rlk_ptr_i));
	printf("Adress Of 'i' = %p\n", pData->rlk_ptr_i);
	printf("\n\n");
	printf("f = %f\n", *(pData->rlk_ptr_f));
	printf("Adress Of 'f' = %p\n", pData->rlk_ptr_f);
	printf("\n\n");
	printf("d = %lf\n", *(pData->rlk_ptr_d));
	printf("Adress Of 'd' = %p\n", pData->rlk_ptr_d);
	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}

