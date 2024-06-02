#include <stdio.h>
int main(void)
{
//variable declaraions
int rlk_iArray[5][3] = { {1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10,15} }; //IN-LINE INITIALIZATION
int rlk_int_size;
int rlk_iArray_size;
int rlk_iArray_num_elements, rlk_iArray_num_rows, rlk_iArray_num_columns;
int rlk_i, rlk_j;
//code
printf("\n\n");
rlk_int_size = sizeof(int);
rlk_iArray_size = sizeof(rlk_iArray);
printf("Size Of Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_size);
rlk_iArray_num_rows = rlk_iArray_size / sizeof(rlk_iArray[0])	;
printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_rows);
rlk_iArray_num_columns = sizeof(rlk_iArray[0]) / rlk_int_size;
printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_columns);
rlk_iArray_num_elements = rlk_iArray_num_rows * rlk_iArray_num_columns;
printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_elements);
printf("\n\n");
printf("Elements In The 2D Array : \n\n");

for (rlk_i = 0; rlk_i < rlk_iArray_num_rows; rlk_i++)
{
printf("****** ROW %d ******\n", (rlk_i + 1));
for (rlk_j = 0; rlk_j < rlk_iArray_num_columns; rlk_j++)
{
printf("rlk_iArray[%d][%d] = %d\n", rlk_i, rlk_j, rlk_iArray[rlk_i][rlk_j]);
}
printf("\n\n");
}
return(0);
}