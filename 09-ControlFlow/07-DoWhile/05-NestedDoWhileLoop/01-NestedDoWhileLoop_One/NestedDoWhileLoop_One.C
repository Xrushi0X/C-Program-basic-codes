#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_i, rlk_j;
	
	//code
	
	printf("\n\n");
	rlk_i = 1;
	
	do
	{
		printf("i = %d\n", rlk_i);
		printf("--------\n\n");
		rlk_j = 1;
		
		do
		{
			printf("\tj = %d\n", rlk_j);
			rlk_j++;
		
		} 
		
		while (rlk_j <= 5);
		rlk_i++;
		printf("\n\n");
	
	} 

	while (rlk_i <= 10);
	return(0);
}