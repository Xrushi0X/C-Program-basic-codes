#include <stdio.h>

int main(void)

{
	
	//variable declarations
	
	int rlk_i;
	
	//code
	
	printf("\n\n");
	printf("Printing Even Numbers From 0 to 100: \n\n");
	
	for (rlk_i = 0; rlk_i <= 100; rlk_i++)
	
	{
		
		
			
			
			if (rlk_i % 2 != 0)
			{
			
			continue;
			
			}
			
			else
			
			{
				printf("\t%d\n", rlk_i);
			
			}
	
	}
	
	printf("\n\n");
	
	

	return(0);
}