#include <stdio.h>
int main(void)
 
 {
	//variable declarations
	
	int rlk_i, rlk_j, rlk_k;
	
	//code
	
	printf("\n\n");
	
	rlk_i = 1;
	
	while (rlk_i <= 10) 
	{
		
		printf("i = %d\n", rlk_i);
		printf("--------\n\n");
		
		rlk_j = 1;
		
		while (rlk_j <= 5)
		{
			
			printf("\tj = %d\n", rlk_j);
			
			printf("\t--------\n\n");
			
			rlk_k = 1;
			
			while (rlk_k <= 3)
			{
				printf("\t\tk = %d\n", rlk_k);
				rlk_k++;
			}
			
			printf("\n\n");
			rlk_j++;
		}
		
		printf("\n\n");
		rlk_i++;
	}
	

	return(0);

}
