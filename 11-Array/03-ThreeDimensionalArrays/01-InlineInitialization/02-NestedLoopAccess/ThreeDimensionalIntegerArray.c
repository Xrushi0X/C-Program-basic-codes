#include <stdio.h>
int main(void)
{
//variable declaraions

int rlk_iArray[5][3][2] = { { { 9, 18 }, { 27, 36 }, { 45, 54 } },
{ { 8, 16 }, { 24, 32 }, { 40, 48 } },
{ { 7, 14 }, { 21, 28 }, { 35, 42 } },
{ { 6, 12 }, { 18, 24 }, { 30, 36 } },
{ { 5, 10 }, { 15, 20 }, { 25, 30 } } };
int rlk_int_size;
int rlk_iArray_size;
int rlk_iArray_num_elements, rlk_iArray_width, rlk_iArray_height, rlk_iArray_depth;
int rlk_i, rlk_j, rlk_k;
//code

printf("\n\n");
	rlk_int_size = sizeof(int);
	rlk_iArray_size = sizeof(rlk_iArray);
	printf("Size Of Three Dimensional ( 3D ) Integer Array Is = %d\n\n", rlk_iArray_size);
	rlk_iArray_width = rlk_iArray_size / sizeof(rlk_iArray[0]);
	printf("Number of Rows (Width) In Three Dimensional ( 3D ) Integer Array Is =%d\n\n", rlk_iArray_width);
	rlk_iArray_height = sizeof(rlk_iArray[0]) / sizeof(rlk_iArray[0][0]);
	printf("Number of Columns (Height) In Three Dimensional ( 3D ) Integer ArrayIs = %d\n\n", rlk_iArray_height);
	rlk_iArray_depth = sizeof(rlk_iArray[0][0]) / rlk_int_size;
	printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", rlk_iArray_depth);
	rlk_iArray_num_elements = rlk_iArray_width * rlk_iArray_height * rlk_iArray_depth;
	printf("Number of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", rlk_iArray_num_elements);
	printf("\n\n");
	printf("Elements In Integer 3D Array : \n\n");
			for (rlk_i = 0; rlk_i < rlk_iArray_width; rlk_i++)
			{
			printf("****** ROW %d ******\n", (rlk_i + 1));
			for (rlk_j = 0; rlk_j < rlk_iArray_height; rlk_j++)
			{
			printf("****** COLUMN %d ******\n", (rlk_j + 1));
			for (rlk_k = 0; rlk_k < rlk_iArray_depth; rlk_k++)
			{
			printf("iArray[%d][%d][%d] = %d\n", rlk_i, rlk_j, rlk_k, rlk_iArray[rlk_i][rlk_j][rlk_k]);
			}
			printf("\n");
			}
			printf("\n\n");
			}
			return(0);
			
	}
