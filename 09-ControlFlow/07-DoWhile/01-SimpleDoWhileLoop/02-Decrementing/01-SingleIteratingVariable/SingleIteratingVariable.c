#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_i;
	
	//code
	
	printf("\n\n");
	
	printf("Printing Digits 10 to 1 : \n\n");
	rlk_i = 10;
	
	do
	{
		printf("\t%d\n", rlk_i);
		rlk_i--;
	} 
	while (rlk_i >= 1);
	
	printf("\n\n");
	return(0);
}