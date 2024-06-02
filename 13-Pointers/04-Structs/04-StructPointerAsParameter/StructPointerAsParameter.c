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
	//function prototypes
	void ChangeValues(struct MyData*);
	//variable declarations
	struct MyData* pData = NULL;
	//code
	printf("\n\n");
	pData = (struct MyData*)malloc(sizeof(struct MyData));
	if (pData == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO 'sturct MyData' !!! EXITTING NOW .	\n\n");
			exit(0);
	}
	else
	
	printf("SUCCESSFULLY ALLOCATED MEMORY TO 'sturct MyData' !!!\n\n");

	pData->rlk_i = 30;
	pData->rlk_f = 11.45f;
	pData->rlk_d = 1.2995;

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", pData->rlk_i);
	printf("f = %f\n", pData->rlk_f);
	printf("d = %lf\n", pData->rlk_d);
	ChangeValues(pData);

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", pData->rlk_i);
	printf("f = %f\n", pData->rlk_f);
	printf("d = %lf\n", pData->rlk_d);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("MEMORY ALLOCATED TO 'struct MyData' HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	return(0);
}
void ChangeValues(struct MyData* pParam_Data)
{
	//code
	pParam_Data->rlk_i = 9;
	pParam_Data->rlk_f = 8.2f;
	pParam_Data->rlk_d = 6.1998;
}


