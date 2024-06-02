#include <stdio.h>
int main(void)
{
//variable declaraions
int rlk_iArray[3][5]; 
int rlk_int_size;
int rlk_iArray_size;
int rlk_iArray_num_elements, rlk_iArray_num_rows, rlk_iArray_num_columns;
int rlk_i, rlk_j;
//code
printf("\n\n");
rlk_int_size = sizeof(int);
rlk_iArray_size = sizeof(rlk_iArray);
printf("Size Of Two Dimensional ( 2D ) Integer Array Is = %d\n\n",	rlk_iArray_size);
rlk_iArray_num_rows = rlk_iArray_size / sizeof(rlk_iArray[0]);
printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n",	rlk_iArray_num_rows);
rlk_iArray_num_columns = sizeof(rlk_iArray[0]) / rlk_int_size;
printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_columns);
rlk_iArray_num_elements = rlk_iArray_num_rows * rlk_iArray_num_columns;
printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_elements);
printf("\n\n");
printf("Elements In The 2D Array : \n\n");

// ****** ROW 1 ******
rlk_iArray[0][0] = 21;
rlk_iArray[0][1] = 42;
rlk_iArray[0][2] = 63;
rlk_iArray[0][3] = 84;
rlk_iArray[0][4] = 105;
// ****** ROW 2 ******
rlk_iArray[1][0] = 22;
rlk_iArray[1][1] = 44;
rlk_iArray[1][2] = 66;
rlk_iArray[1][3] = 88;
rlk_iArray[1][4] = 110;
// ****** ROW 3 ******
rlk_iArray[2][0] = 23;
rlk_iArray[2][1] = 46;

rlk_iArray[2][2] = 69;
rlk_iArray[2][3] = 92;
rlk_iArray[2][4] = 115;

for (rlk_i = 0; rlk_i < rlk_iArray_num_rows; rlk_i++)
{
printf("****** ROW %d ******\n", (rlk_i + 1));
for (rlk_j = 0; rlk_j < rlk_iArray_num_columns; rlk_j++)
{
printf("iArray[%d][%d] = %d\n", rlk_i, rlk_j, rlk_iArray[rlk_i][rlk_j]);
}
printf("\n\n");
}
return(0);
}