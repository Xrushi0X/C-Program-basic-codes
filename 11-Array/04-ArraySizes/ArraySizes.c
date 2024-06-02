#include <stdio.h>
int main(void)
{
	// variable declaration
	int rlk_iArray_One[5];
	int rlk_iArray_Two[5][3];
	int rlk_iArray_Three[100][100][5];
	int rlk_num_rows_2D;
	int rlk_num_columns_2D;
	int rlk_num_rows_3D;
	int rlk_num_columns_3D;
	int rlk_depth_3D;
	// code
	printf("\n\n");
	printf("Size of 1-D integer array iArray_One = %lu\n", sizeof(rlk_iArray_One));
	printf("Number of elements in 1-D integer array iArray_One = %lu\n", (sizeof(rlk_iArray_One) / sizeof(int)));
	printf("\n\n");
	printf("Size of 2-D integer array iArray_Two = %lu\n", sizeof(rlk_iArray_Two));
	printf("Number rows in 2-D integer array iArray_Two = %lu\n", (sizeof(rlk_iArray_Two) / sizeof(rlk_iArray_Two[0])));
	rlk_num_rows_2D = (sizeof(rlk_iArray_Two) / sizeof(rlk_iArray_Two[0]));
	printf("Number of elements (columns) in each row in 2-D integer array iArray_Two = % lu\n", (sizeof(rlk_iArray_Two[0]) / sizeof(rlk_iArray_Two[0][0])));
	rlk_num_columns_2D = (sizeof(rlk_iArray_Two[0]) / sizeof(rlk_iArray_Two[0][0]));
	printf("Number of elements in total in 2-D Array iArray_Two = %d\n",(rlk_num_rows_2D * rlk_num_columns_2D));
	printf("\n\n");
	printf("\n\n");
	printf("Size of 3-D integer array iArray_Three = %lu\n", sizeof(rlk_iArray_Three));
	printf("Number rows in 3-D integer array iArray_Three = %lu\n", (sizeof(rlk_iArray_Three) / sizeof(rlk_iArray_Three[0])));
	rlk_num_rows_3D = (sizeof(rlk_iArray_Three) / sizeof(rlk_iArray_Three[0]));
	printf("Number of elements (columns) in one row in 3-D integer arrayiArray_Three = % lu\n", (sizeof(rlk_iArray_Three[0]) / sizeof(rlk_iArray_Three[0][0])));
	rlk_num_columns_3D = (sizeof(rlk_iArray_Three[0]) / sizeof(rlk_iArray_Three[0][0]));
		printf("Number of elements (depth) in one column in one row in 3-D integerarray iArray_Three = %lu\n", (sizeof(rlk_iArray_Three[0][0]) / sizeof(rlk_iArray_Three[0][0][0])));
		rlk_depth_3D = (sizeof(rlk_iArray_Three[0][0]) / sizeof(rlk_iArray_Three[0][0][0]));
		printf("Number of elements in total in 3-D Array iArray_Three = %d\n",
			(rlk_num_rows_3D * rlk_num_columns_3D * rlk_depth_3D));
		printf("\n\n");
		return(0);
}

