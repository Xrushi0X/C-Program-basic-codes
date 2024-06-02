#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_i;
	
	//code
	
	printf("\n\n");
	printf("Printing Digits 1 to 10 : \n\n");
	
	rlk_i = 1;
	do
	{
		printf("\t%d\n", rlk_i);
		rlk_i++;
	} 
	while (rlk_i <= 10);
	
	printf("\n\n");
	return(0);
}