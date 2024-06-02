#include <stdio.h>
int main(void)

{
	//variable declarations
	
	int rlk_i, rlk_j;
	
	//code
	
	printf("\n\n");
	
	printf("printing figits 1to10 and 10 to 100 : \n\n\n");
	
	for (rlk_i = 1, rlk_j = 10; rlk_i <= 10, rlk_j <= 100; rlk_i++, rlk_j = rlk_j + 10)
	{
		printf("\t %d \t %d\n", rlk_i, rlk_j);
	}
	printf("\n\n");
	
	return(0);
}

