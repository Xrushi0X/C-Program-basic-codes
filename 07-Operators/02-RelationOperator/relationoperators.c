#include<stdio.h>

int main(void)
{
	//variale dec

	int rlk_a;
	int rlk_b;
	int result;

	//code
	printf("\n\n");
	printf("Enter ONe Integer : ");
	scanf("%d", &rlk_a);
	printf("\n\n");
	printf("Enter Another Integer : ");
	scanf("%d", &rlk_b);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("If Answer = 1, It Is 'TRUE'.\n\n");

	
	result = (rlk_a < rlk_b);
	printf("(a > b) A = %d Is Greater Than B = %d \t Answer =%d\n", rlk_a, rlk_b, result);

	result = (rlk_a > rlk_b);
	printf("(a > b) A = %d Is Greater Than B = %d \t Answer =%d\n", rlk_a, rlk_b, result);
	 
	result = (rlk_a <= rlk_b);
	printf("(a <= b) A = %d Is Lesser Than Or Equal To B = %d \t Answer =%d\n", rlk_a, rlk_b, result);

	result = (rlk_a >= rlk_b);
	printf("(a >= b) A = %d Is Greater Than Or Equal To  B = %d \t Answer =%d\n", rlk_a, rlk_b, result);

	result = (rlk_a == rlk_b);
	printf("(a == b) A = %d Is EQUAL B = %d \t Answer =%d\n", rlk_a, rlk_b, result);

	result = (rlk_a != rlk_b);
	printf("(a != b) A = %d Is Not EQUAL To B = %d \t Answer =%d\n", rlk_a, rlk_b, result);

	return(0);

}

