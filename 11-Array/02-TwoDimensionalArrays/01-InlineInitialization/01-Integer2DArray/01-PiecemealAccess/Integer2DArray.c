#include <stdio.h>
int main(void)
{
//variable declaraions
int rlk_iArray[5][3] = { {1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10,15} }; 
int rlk_int_size;
int rlk_iArray_size;
int rlk_iArray_num_elements, rlk_iArray_num_rows, rlk_iArray_num_columns;
//code
printf("\n\n");

rlk_int_size = sizeof(int);
rlk_iArray_size = sizeof(rlk_iArray);


printf("Size Of Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_size);
rlk_iArray_num_rows = rlk_iArray_size / sizeof(rlk_iArray[0]);

printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n",rlk_iArray_num_rows);
rlk_iArray_num_columns = sizeof(rlk_iArray[0]) / rlk_int_size;

printf("Number of Columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_columns);
rlk_iArray_num_elements = rlk_iArray_num_rows * rlk_iArray_num_columns;

printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", rlk_iArray_num_elements);
printf("\n\n");

printf("Elements In The 2D Array : \n\n");

// *** ROW 1 ***
printf("****** ROW 1 ******\n");
printf("iArray[0][0] = %d\n", rlk_iArray[0][0]);

printf("iArray[0][1] = %d\n", rlk_iArray[0][1]);

printf("iArray[0][2] = %d\n", rlk_iArray[0][2]);

printf("\n\n");
// *** ROW 2 ***
printf("****** ROW 2 ******\n");
printf("iArray[1][0] = %d\n", rlk_iArray[1][0]); 


 printf("iArray[1][1] = %d\n", rlk_iArray[1][1]);

printf("iArray[1][2] = %d\n", rlk_iArray[1][2]);

printf("\n\n");
// *** ROW 3 ***
printf("****** ROW 3 ******\n");
printf("iArray[2][0] = %d\n", rlk_iArray[2][0]);

printf("iArray[2][1] = %d\n", rlk_iArray[2][1]);

printf("iArray[2][2] = %d\n", rlk_iArray[2][2]);

printf("\n\n");
// *** ROW 4 ***
printf("****** ROW 4 ******\n");
printf("iArray[3][0] = %d\n", rlk_iArray[3][0]);

printf("iArray[3][1] = %d\n", rlk_iArray[3][1]);

printf("iArray[3][2] = %d\n", rlk_iArray[3][2]);

printf("\n\n");
// *** ROW 5 ***
printf("****** ROW 5 ******\n");
printf("iArray[4][0] = %d\n", rlk_iArray[4][0]);

printf("iArray[4][1] = %d\n", rlk_iArray[4][1]);

printf("iArray[4][2] = %d\n", rlk_iArray[4][2]);

printf("\n\n");
return(0);
}