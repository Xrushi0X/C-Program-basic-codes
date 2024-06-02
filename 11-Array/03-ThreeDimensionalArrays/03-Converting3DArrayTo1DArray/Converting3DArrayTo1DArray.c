#include <stdio.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 3
#define DEPTH 2
int main(void)
{
	//variable declaraions
	
	int rlk_iArray[NUM_ROWS][NUM_COLUMNS][DEPTH] = { { { 9, 18 }, { 27, 36 }, { 45,
	54 } },
	 { { 8, 16 }, { 24, 32 }, { 40,
	48 } },
	 { { 7, 14 }, { 21, 28 }, { 35,
	42 } },
	 { { 6, 12 }, { 18, 24 }, { 30,
	36 } },
	 { { 5, 10 }, { 15, 20 }, { 25,
	30 } } };
	int rlk_i, rlk_j, rlk_k;
	int rlk_iArray_1D[NUM_ROWS * NUM_COLUMNS * DEPTH];
		//code
		printf("\n\n");
	printf("Elements In The 3D Array : \n\n");
	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{
		printf("****** ROW %d ******\n", (rlk_i + 1));
		for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
		{
			printf("****** COLUMN %d ******\n", (rlk_j + 1));
			for (rlk_k = 0; rlk_k < DEPTH; rlk_k++)
			{
				printf("iArray[%d][%d][%d] = %d\n", rlk_i, rlk_j, rlk_k, rlk_iArray[rlk_i][rlk_j][rlk_k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	// ****** CONVERTING 3D TO 1D ******
	for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
		{
			for (rlk_k = 0; rlk_k < DEPTH; rlk_k++)

			{
				rlk_iArray_1D[(rlk_i * NUM_COLUMNS * DEPTH) + (rlk_j * DEPTH) + rlk_k] = rlk_iArray[rlk_i][rlk_j][rlk_k];
			}
		}
	}
	// ****** DISPLAY 1D ARRAY ******
	printf("\n\n\n\n");
	printf("Elements In The 1D Array : \n\n");
	for (rlk_i = 0; rlk_i < (NUM_ROWS * NUM_COLUMNS * DEPTH); rlk_i++)
	{
		printf("iArray_1D[%d] = %d\n", rlk_i, rlk_iArray_1D[rlk_i]);
	}
	return(0);
}