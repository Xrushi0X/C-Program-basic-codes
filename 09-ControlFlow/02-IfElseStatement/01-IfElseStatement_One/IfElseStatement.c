#include<stdio.h>
int main(void)
{
	//variable dec

	//code
	int rlk_a, rlk_b, rlk_p;
	rlk_a = 9;
	rlk_b = 30;
	rlk_p = 30;

	//*****First If-ELSE PAIR******
	printf("\n\n");
	if (rlk_a < rlk_b)
	{
		printf("Entering First Else If-Block...\n\n");
		printf("A is Less Than B !!!\n\n");

	}
	else
	{
		printf("Entering First else-block.....\n\n");
		printf("A is NOT Less Than B !!!\n\n");

	}
	printf("First If-else Pair Done !!! \n\n");

	//Second if-else PAIR***
	printf("\n\n");
	if (rlk_b != rlk_p)
	{
		printf("Entering Second If-Block...\n\n");
		printf("B is Not Equal To P !!!\n\n");

	}
	else
	{
		printf("Entering Second Else Block ......\n\n");
		printf("B IS  Equal To P!!!\n\n");

	}
	printf("Second If * else Pair Done !!!\n\n");
	
	return(0);


}
