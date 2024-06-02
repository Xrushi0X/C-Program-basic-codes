#include <stdio.h>

int main(void)
{
	
	//variable declarations
	int rlk_i, rlk_j;
	
	//code
	
	printf("\n\n");
	
	rlk_i = 1;
	
	while (rlk_i <= 10)
	{
		
		printf("i = %d\n", rlk_i);
		
		printf("-------------\n\n");
		
		rlk_j = 1;
		
		while (rlk_j <= 5) 
		
		{
			
			printf("\tj = %d\n", rlk_j);
			rlk_j++;
		}
		
		rlk_i++;
		
		printf("\n\n");
	}
	
	return(0);

}
