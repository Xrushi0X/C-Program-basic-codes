#include <stdio.h>
#define NUM_ELEMENTS 10
int main(void)
{
//variable declarations
int rlk_iArray[NUM_ELEMENTS];
int rlk_i, rlk_num, rlk_j, count = 0;
//code
printf("\n\n");

printf("Enter Integer Elememts For Array : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
{
scanf("%d", &rlk_num);

if (rlk_num < 0)
rlk_num = -1 * rlk_num;
rlk_iArray[rlk_i] = rlk_num;
}

printf("\n\n");
printf("Array Elements Are : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
printf("%d\n", rlk_iArray[rlk_i]);

printf("\n\n");
printf("Prime Numbers Amongst The Array Elements Are : \n\n");
for (rlk_i = 0; rlk_i < NUM_ELEMENTS; rlk_i++)
{
for (rlk_j = 1; rlk_j <= rlk_iArray[rlk_i]; rlk_j++)
{
if ((rlk_iArray[rlk_i] % rlk_j) == 0)
count++;
}



if (count == 2)
printf("%d\n", rlk_iArray[rlk_i]);

count = 0; 
}
return(0);
}