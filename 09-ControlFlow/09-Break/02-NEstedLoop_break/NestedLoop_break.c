#include <stdio.h>
#include <conio.h>
int main(void)

{
	
	//variable declarations
	
	int rlk_i, rlk_j;
	//code
	
	printf("\n\n");
	
	for (rlk_i = 1; rlk_i <= 20; rlk_i++) 
	
	{
		for (rlk_j = 1; rlk_j <= 20; rlk_j++)
		
		{
			if (rlk_j > rlk_i)
			
			{
				break
					;
			}
			else 
			
			{
			
				printf("* ");
		
			}
		
		}
		
		printf("\n");
	
	}
	
	printf("\n\n");
	
	return(0);

}
