#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_i, rlk_j, rlk_k;
	
	
	//code
	
	printf("\n\n");
	for (rlk_i = 1; rlk_i <= 10; rlk_i++)
	{
		
		printf("rlk_i = %d\n", rlk_i);
		printf("-------------\n\n");
		for (rlk_j = 1; rlk_j <= 5; rlk_j++) 
	{
			
			printf("\trlk_j = %d\n", rlk_j);
			printf("\t-----------\n\n");
			for (rlk_k = 1; rlk_k <= 3; rlk_k++) 
	{
	      
				printf("\t\trlk_k = %d\n", rlk_k);
	}
	
	     
		 printf("\n\n");
	}
	  
	   printf("\n\n");
	
	}
	 
	 return(0);
}