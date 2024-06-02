#include <stdio.h>
#define NUM_ELEMENTS 10
int main(void)
{
//variable declarations
int rlk_iArray[NUM_ELEMENTS];
int rlk_i, rlk_num, rlk_sum = 0;
//code
printf("\n\n");
printf("Enter Integer Elememts For Array : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
{
scanf("%d", &rlk_num);
rlk_iArray[rlk_i] = rlk_num;
}
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
{
	rlk_sum = rlk_sum + rlk_iArray[rlk_i];
}
printf("\n\n");
printf("Sum Of ALL Elements Of Array = %d\n\n", rlk_sum);
return(0);
}