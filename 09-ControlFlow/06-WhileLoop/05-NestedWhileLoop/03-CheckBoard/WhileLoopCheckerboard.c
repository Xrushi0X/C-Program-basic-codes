
#include <stdio.h>

int main(void)
{
	//variable declarations
	
	int rlk_i, rlk_j, rlk_c;
	
	//code
	
	printf("\n\n");
	
	rlk_i = 0;
	
	while (rlk_i < 64)
	{
		rlk_j = 0;
	
	while (rlk_j < 64)
		
		{
			
			rlk_c = ((rlk_i & 0x8) == 0) ^ ((rlk_j & 0x8) == 0);
			

			if (rlk_c == 0)
				printf(" ");
			
			if (rlk_c == 1)
				printf("* ");
			
			rlk_j++;
		}
		
		printf("\n\n");
		
		rlk_i++;
	
	}
	
	
	return(0);

}