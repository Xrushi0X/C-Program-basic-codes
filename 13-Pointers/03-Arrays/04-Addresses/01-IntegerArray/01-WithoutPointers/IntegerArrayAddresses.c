#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_iArray[10];
	int rlk_i;
	//code
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
	rlk_iArray[rlk_i] = (rlk_i + 1) * 3;
	
	printf("\n\n");
	
	printf("Elements Of The Integer Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	
	printf("iArray[%d] = %d\n", rlk_i, rlk_iArray[rlk_i]);
	
	printf("\n\n");
	
	printf("Elements Of The Integer Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		printf("iArray[%d] = %d \t \t Address = %p\n", rlk_i, rlk_iArray[rlk_i], &rlk_iArray[rlk_i]);
	printf("\n\n");
	return(0);
}
