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

printf("\n\n");
printf("Even Numbers Amongst The Array Elements Are : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
{
if ((rlk_iArray[rlk_i] % 2) == 0)
printf("%d\n", rlk_iArray[rlk_i]);
}

printf("\n\n");
printf("Odd Numbers Amongst The Array Elements Are : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
{
if ((rlk_iArray[rlk_i] % 2) != 0)
printf("%d\n", rlk_iArray[rlk_i]);
}
return(0);
}