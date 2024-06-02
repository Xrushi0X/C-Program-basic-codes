#include <stdio.h>

int main(void)

{
	//variable declarations

	int rlk_i, rlk_j;

	//code

	printf("\n\n");

	for (rlk_i = 1; rlk_i <= 10; rlk_i++) {
			printf("i = %d\n", rlk_i);
			printf("--------\n\n");
		
		for (rlk_j = 1; rlk_j <= 5; rlk_j++) 
		{
				printf("\tj = %d\n", rlk_j);
		}
		printf("\n\n");
	}

	return(0);

}