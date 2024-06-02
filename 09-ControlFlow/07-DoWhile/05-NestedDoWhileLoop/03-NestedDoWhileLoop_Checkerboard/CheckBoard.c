#include <stdio.h>
int main(void)
{
	//variable declarations
	
	int rlk_i, rlk_j, rlk_c;
	
	//code
	printf("\n\n");
	rlk_i = 0;
	
	do
	{
		rlk_j = 0;
		
		do
		

		{
			
			rlk_c = ((rlk_i & 0x8) == 0) ^ ((rlk_j & 0x8) == 0);
			if (rlk_c == 0)
				printf(" ");
			
			if (rlk_c == 1)
				printf("* ");
			rlk_j++;
		} 
		while (rlk_j < 64);
		printf("\n\n");
		rlk_i++;
	}
	while (rlk_i < 64);
	return(0);

}

