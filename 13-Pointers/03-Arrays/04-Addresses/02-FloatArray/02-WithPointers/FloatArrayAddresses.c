#include <stdio.h>
int main(void)
{
	//variable declarations
	float rlk_fArray[10];
	float* rlk_ptr_fArray = NULL;
	int rlk_i;
	//code
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
		rlk_fArray[rlk_i] = (float)(rlk_i + 1) * 1.5f;

	
	rlk_ptr_fArray = rlk_fArray;
	
	printf("\n\n");
	
	printf("Elements Of The 'float' Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
	printf("fArray[%d] = %f\n", rlk_i, *(rlk_ptr_fArray + rlk_i));
	
	printf("\n\n");
	
	printf("Elements Of The 'float' Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
	printf("fArray[%d] = %f \t \t Address = %p\n", rlk_i, *(rlk_ptr_fArray + rlk_i),(rlk_ptr_fArray + rlk_i));
	printf("\n\n");
	
	return(0);
}
