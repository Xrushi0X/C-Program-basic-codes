#include <stdio.h>
int main(void)
{
	//variable declarations
	double rlk_dArray[10];
	int rlk_i;
	//code
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
		rlk_dArray[rlk_i] = (float)(rlk_i + 1) * 1.333333f;
	printf("\n\n");
	
	printf("Elements Of The 'double' Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
	printf("dArray[%d] = %lf\n", rlk_i, rlk_dArray[rlk_i]);
	
	printf("\n\n");
	
	printf("Elements Of The 'double' Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
	printf("dArray[%d] = %lf \t \t Address = %p\n", rlk_i, rlk_dArray[rlk_i], &rlk_dArray[rlk_i]);
	
	printf("\n\n");


	return(0);
}
