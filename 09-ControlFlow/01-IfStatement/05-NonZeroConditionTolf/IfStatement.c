#include<stdio.h>
int main(void)
{
	// variale Dec
	int rlk_a;

	//code
	printf("\n\n");

	rlk_a = 5;
	if (rlk_a)
	{
		printf("If-Block 1 : 'A' Exists And Has Value = %d !!! \n\n", rlk_a);

	}
	rlk_a = -5;
	if (rlk_a)
	{
		printf("If-Block 2: 'A' Exists And Has Value =%d !!!", rlk_a);

	}

	rlk_a = 0;
	if (rlk_a)
	{
		printf("If-Block 3 : 'A' Exists And Has Value = %d  !!! \n\n", rlk_a);

	}

	printf("All Three If-Statement Are Done !!! \n\n\ ");

	return(0);


}