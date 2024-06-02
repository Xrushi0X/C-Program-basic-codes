#include <stdio.h>
#include <stdlib.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 5
int main(void)
{
	//variable declarations
	int* rlk_iArray[NUM_ROWS]; 
		int rlk_i, rlk_j;
	//code
	printf("\n\n");
	printf("**** MEMORY ALLOCATION TO 2D INTEGER ARRAY ***\n\n");
	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{		rlk_iArray[rlk_i] = (int*)malloc((NUM_COLUMNS - rlk_i) * sizeof(int));
		if (rlk_iArray[rlk_i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d OF 2D INTEGER ARRAY !!! EXITTING NOW...\n\n", rlk_i);
				exit(0);
		}
		else
				printf("MEMORY ALLOCATION TO ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", rlk_i);
	}
	for (rlk_i = 0; rlk_i < 5; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < (NUM_COLUMNS - rlk_i); rlk_j++)
		{
			rlk_iArray[rlk_i][rlk_j] = (rlk_i * 1) + (rlk_j * 1);
		}
	}
	for (rlk_i = 0; rlk_i < 5; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < (NUM_COLUMNS - rlk_i); rlk_j++)
		{
			printf("iArray[%d][%d] = %d \t At Address : %p\n", rlk_i, rlk_j, rlk_iArray[rlk_i] [rlk_j], &rlk_iArray[rlk_i][rlk_j]);
		}
		printf("\n");
	}
	for (rlk_i = (NUM_ROWS - 1); rlk_i >= 0; rlk_i--)
	{
		if (rlk_iArray[rlk_i])
		{
			free(rlk_iArray[rlk_i]);
			rlk_iArray[rlk_i] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d HAS BEEN SUCCESSFULLY FREED !!!\n\n", rlk_i);
		}
	}
	return(0);
}
