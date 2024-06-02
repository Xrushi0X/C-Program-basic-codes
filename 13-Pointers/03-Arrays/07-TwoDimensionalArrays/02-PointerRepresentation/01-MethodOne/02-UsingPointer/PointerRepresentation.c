#include <stdio.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 3
int main(void)
{
	//variable declarations
	int rlk_iArray[NUM_ROWS][NUM_COLUMNS];
	int rlk_i, rlk_j;
	int* rlk_ptr_iArray_Row = NULL;
	//code
	
		for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
		{
			rlk_ptr_iArray_Row = rlk_iArray[rlk_i];
				for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
					*(rlk_ptr_iArray_Row + rlk_j) = (rlk_i + 1) * (rlk_j + 1);

		}
	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{
		rlk_ptr_iArray_Row = rlk_iArray[rlk_i];
		for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
		{
			printf("*(ptr_iArray_Row + %d)= %d \t \t At Address (ptr_iArray_Row+ j) : % p\n", rlk_j, *(rlk_ptr_iArray_Row + rlk_j), (rlk_ptr_iArray_Row + rlk_j));
		}
		printf("\n\n");
	}
	return(0);
}
