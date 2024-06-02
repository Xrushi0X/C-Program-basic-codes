#include <stdio.h>
#include <stdlib.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 3
int main(void)
{
	//variable declarations
	int rlk_i, rlk_j;
	int** rlk_ptr_iArray = NULL;
	//code	printf("\n\n");	rlk_ptr_iArray = (rlk_int**)malloc(NUM_ROWS * sizeof(int*));
		if (rlk_ptr_iArray == NULL)
		{
			printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWS	FAILED !!!EXITTING NOW...\n\n", NUM_ROWS);
				exit(0);
		}
		else
				printf("MEMORY ALLOCATION TO THE 1D ARRAY OF BASE ADDRESSES OF %d ROWSHAS SUCCEEDED !!!\n\n", NUM_ROWS);
					
					for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
					{
						rlk_ptr_iArray[rlk_i] = (int*)malloc(NUM_COLUMNS * sizeof(int)); 
							if (rlk_ptr_iArray == NULL)
							{
								printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d FAILED !!!EXITTING NOW...\n\n", rlk_i);
									exit(0);
							}
							else
									printf("MEMORY ALLOCATION TO THE COLUMNS OF ROW %d HAS SUCCEEDED !!!\n\n", rlk_i);
					}

	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)

		{
			*(*(rlk_ptr_iArray + rlk_i) + rlk_j) = (rlk_i + 1) * (rlk_j + 1);
			(rlk_i + 1)* (rlk_j + 1);
		}
	}

	printf("\n\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
		{
			printf("ptr_iArray_Row[%d][%d] = %d \t \t At Address & ptr_iArray_Row[% d][% d] : % p\n", rlk_i, rlk_j, rlk_ptr_iArray[rlk_i][rlk_j], rlk_i, rlk_j,&rlk_ptr_iArray[rlk_i][rlk_j]);
		}
		printf("\n\n");
	}

	for (rlk_i = (NUM_ROWS - 1); rlk_i >= 0; rlk_i--)
	{
		if (*(rlk_ptr_iArray + rlk_i))
		{
			free(*(rlk_ptr_iArray + rlk_i));
			*(rlk_ptr_iArray + rlk_i) = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", rlk_i);
		}
	}
	
		if (rlk_ptr_iArray)
		{
			free(rlk_ptr_iArray);
			rlk_ptr_iArray = NULL;
			printf("MEMORY ALLOCATED TO ptr_iArray HAS BEEN SUCCESSFULLY FREED !!!\n\n");
		}
	return(0);
}