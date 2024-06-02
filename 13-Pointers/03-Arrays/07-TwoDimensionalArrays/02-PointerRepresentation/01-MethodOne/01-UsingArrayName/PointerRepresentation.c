#include <stdio.h>
#include <stdlib.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 3
int main(void)
{
	//variable declarations
	int rlk_iArray[NUM_ROWS][NUM_COLUMNS];
	int rlk_i, rlk_j;
	//code
	

		for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
		{
			for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
				*(rlk_iArray[rlk_i] + rlk_j) = (rlk_i + 1) * (rlk_j + 1);
			
		
		}
	
	printf("\n\n");
	
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	
	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
		{
			
			printf("*(iArray[%d] + %d)= %d \t \t At Address (iArray[i] + j) : %p\n", rlk_i, rlk_j, *(rlk_iArray[rlk_i] + rlk_j), (rlk_iArray[rlk_i] + rlk_j));
		
		}
		
		printf("\n\n");
	
	}
	
	
	return(0);
}