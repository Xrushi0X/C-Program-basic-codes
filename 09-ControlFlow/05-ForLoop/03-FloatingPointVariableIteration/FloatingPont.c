#include <stdio.h>
int main(void)
{
	//variable declarations
	float rlk_f;
	float rlk_f_num = 1.7f; 
		
		//code
		
	printf("\n\n");
	
	printf("Printing Numbers %f to %f : \n\n", rlk_f_num, (rlk_f_num * 10.0f));
	
	for (rlk_f = rlk_f_num; rlk_f <= (rlk_f_num * 10.0f); rlk_f = rlk_f + rlk_f_num)
	
	{
		
		printf("\t%f\n", rlk_f);
	
	}
	
	  printf("\n\n");
	
	return(0);
}