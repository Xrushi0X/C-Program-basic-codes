#include <stdio.h>
enum
{
	NEGATIVE = -1,
	ZERO,
	POSITIVE
};
int main(void)
{
	//function declarations
	int Difference(int, int, int*);
	//variable declaration
	int rlk_a;
	int rlk_b;
	int rlk_answer, rlk_ret;
	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &rlk_a);
	
	printf("\n\n");
	
	printf("Enter Value Of 'B' : ");
	
	scanf("%d", &rlk_b);
	
	rlk_ret = Difference(rlk_a, rlk_b, &rlk_answer);
	printf("\n\n");
	
	printf("Difference Of %d And %d = %d\n\n", rlk_a, rlk_b, rlk_answer);
	
	if (rlk_ret == POSITIVE)
	
	printf("The Difference Of %d And %d Is Positive !!!\n\n", rlk_a, rlk_b);
	
	else if (rlk_ret == NEGATIVE)
	
	printf("The Difference Of %d And %d Is Negative !!!\n\n", rlk_a, rlk_b);
	
	else
	
	printf("The Difference Of %d And %d Is Zero !!!\n\n", rlk_a, rlk_b);
	
	return(0);
}int Difference(int rlk_x, int rlk_y, int* rlk_diff)
{
	//code
	*rlk_diff = rlk_x - rlk_y;
	if (*rlk_diff > 0)
		return(POSITIVE);
	else if (*rlk_diff < 0)
		return(NEGATIVE);
	else
		return(ZERO);
}
