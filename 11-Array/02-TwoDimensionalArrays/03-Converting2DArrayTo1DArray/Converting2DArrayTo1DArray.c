#include <stdio.h>
#define NUM_ROWS 5
#define NUM_COLUMNS 3
int main(void)
{
//variable declaraions
int rlk_iArray_2D[NUM_ROWS][NUM_COLUMNS]; 

int rlk_iArray_1D[NUM_ROWS * NUM_COLUMNS];
int rlk_i, rlk_j;
int rlk_num;
//code
printf("Enter Elements Of Your Choice To Fill Up The Integer 2D Array : \n\n");
for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
{
printf("For ROW NUMBER %d : \n", (rlk_i + 1));
for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
{
printf("Enter Element Number %d : \n", (rlk_j + 1));
scanf("%d", &rlk_num);
rlk_iArray_2D[rlk_i][rlk_j] = rlk_num;
}
printf("\n\n");
}
// *** DISPLAY OF 2D ARRAY ***
printf("\n\n");
printf("Two-Dimensional ( 2D ) Array Of Integers : \n\n");
for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
{
printf("****** ROW %d ******\n",(rlk_i + 1));
for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
{
printf("iArray_2D[%d][%d] = %d\n", rlk_i, rlk_j, rlk_iArray_2D[rlk_i][rlk_j]);
}
printf("\n\n");
}

for (rlk_i = 0; rlk_i < NUM_ROWS; rlk_i++)
{
for (rlk_j = 0; rlk_j < NUM_COLUMNS; rlk_j++)
{
	rlk_iArray_1D[(rlk_i * NUM_COLUMNS) + rlk_j] = rlk_iArray_2D[rlk_i][rlk_j];
}
}

// *** PRINTING 1D ARRAY ***
printf("\n\n");
printf("One-Dimensional ( 1D ) Array Of Integers : \n\n");
for (rlk_i = 0; rlk_i < (NUM_ROWS * NUM_COLUMNS); rlk_i++)
{
printf("iArray_1D[%d] = %d\n", rlk_i, rlk_iArray_1D[rlk_i]);
}
printf("\n\n");
return(0);
}