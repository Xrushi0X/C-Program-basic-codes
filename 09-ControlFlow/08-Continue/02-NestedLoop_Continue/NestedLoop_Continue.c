#include <stdio.h>

int main(void)
{
	
	//variable declarations
	
	int rlk_i, rlk_j;
	
	//code
	
	printf("\n\n");
	
	printf("Outer Loop Prints Odd Numbers Between 1 and 10. \n\n");
	
	printf("Inner Loop Prints Even Numbers Between 1 and 10 For Every Odd NumberPrinted By Outer Loop. \n\n");
		
		
		
	
		for (rlk_i = 1; rlk_i <= 10; rlk_i++)
		{
			if (rlk_i % 2 != 0) 
			
			
			{
		
		printf("i = %d\n", rlk_i);
		
		printf("---------\n");
		
		for (rlk_j = 1; rlk_j <= 10; rlk_j++)
		
		{
		
		if (rlk_j % 2 == 0) 
		

			{
				printf("\tj = %d\n", rlk_j);
	
			}
		
		else 
					{
						continue;
					}
		

		}
		
		printf("\n\n");
		
		}
		
		else 
		

		{
				continue;
			}
		

		}

		printf("\n\n");
	

	return(0);

}