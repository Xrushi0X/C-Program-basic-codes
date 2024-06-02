#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//variable declarations
	int** rlk_ptr_iArray = NULL; 

	int rlk_i, rlk_j;
	int rlk_num_rows, rlk_num_columns;
	//code

	printf("\n\n");
	printf("Enter Number Of Rows : ");
	scanf("%d", &rlk_num_rows);

	printf("\n\n");
	printf("Enter Number Of Columns : ");
	scanf("%d", &rlk_num_columns);

	printf("\n\n");
	printf("********** MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");
	rlk_ptr_iArray = (int**)malloc(rlk_num_rows * sizeof(int*));
	if (rlk_ptr_iArray == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO %d ROWS OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n", rlk_num_rows);
			exit(0);
	}
	else
			printf("MEMORY ALLOCATION TO %d ROWS OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", rlk_num_rows);
			
				for (rlk_i = 0; rlk_i < rlk_num_rows; rlk_i++)
				{
					rlk_ptr_iArray[rlk_i] = (int*)malloc(rlk_num_columns * sizeof(int));
						if (rlk_ptr_iArray[rlk_i] == NULL)
						{
							printf("FAILED TO ALLOCATE MEMORY TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY !!!EXITTING NOW...\n\n", rlk_i);
								exit(0);
						}
						else
								printf("MEMORY ALLOCATION TO COLUMNS OF ROW %d OF 2D INTEGER ARRAY SUCCEEDED !!!\n\n", rlk_i);
				}
	
	for (rlk_i = 0; rlk_i < rlk_num_rows; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < rlk_num_columns; rlk_j++)
		{
			rlk_ptr_iArray[rlk_i][rlk_j] = (rlk_i * 1) + (rlk_j * 1); 
		}
	}
		
	for (rlk_i = 0; rlk_i < rlk_num_rows; rlk_i++)
	{
		printf("Base Address Of Row %d : ptr_iArray[%d] = %p \t At Address : %p\n", rlk_i, rlk_i, rlk_ptr_iArray[rlk_i], &rlk_ptr_iArray[rlk_i]);
	}
	printf("\n\n");
	for (rlk_i = 0; rlk_i < rlk_num_rows; rlk_i++)
	{
		for (rlk_j = 0; rlk_j < rlk_num_columns; rlk_j++)
		{
			printf("ptr_iArray[%d][%d] = %d \t At Address : %p\n", rlk_i, rlk_j, rlk_ptr_iArray[rlk_i][rlk_j], &rlk_ptr_iArray[rlk_i][rlk_j]);
		}
		printf("\n");
	}

	for (rlk_i = (rlk_num_rows - 1); rlk_i >= 0; rlk_i--)
	{
		if (rlk_ptr_iArray[rlk_i])
		{
			free(rlk_ptr_iArray[rlk_i]);
			rlk_ptr_iArray[rlk_i] = NULL;
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

