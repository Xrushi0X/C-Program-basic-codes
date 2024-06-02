#include <stdio.h>

int main(void)

{
	
	//variable declarations
	
	int rlk_i, rlk_j;
	
	//code
	printf("\n\n");
	
	printf("Printing Digits 10 to 1 and 100 to 10: \n\n");
	
	rlk_i = 10;
	rlk_j = 100;
	
	while (rlk_i >= 1, rlk_j >= 10)
	{
		printf("\t %d \t %d\n", rlk_i, rlk_j);
		rlk_i--;
		rlk_j = rlk_j - 10;
	}
	
	printf("\n\n");
	

	return(0);

}
