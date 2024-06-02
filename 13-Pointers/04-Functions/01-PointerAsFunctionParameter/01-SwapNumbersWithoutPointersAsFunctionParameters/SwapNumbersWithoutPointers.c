#include <stdio.h>
int main(void)
{
	//function declarations
	void SwapNumbers(int, int);
	//variable declaration
	int rlk_a;
	int rlk_b;
	//code
	printf("\n\n");
	printf("Enter Value For 'A' : ");
	scanf("%d", &rlk_a);
	
	printf("\n\n");
	printf("Enter Value For 'B' : ");
	scanf("%d", &rlk_b);
	
	printf("\n\n");
	printf("****** BEFORE SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", rlk_a);

	printf("Value Of 'B' = %d\n\n", rlk_b);
	SwapNumbers(rlk_a, rlk_b); 
	printf("\n\n");
	
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'A' = %d\n\n", rlk_a);
	
	printf("Value Of 'B' = %d\n\n", rlk_b);
	
	return(0);
}
void SwapNumbers(int rlk_x, int rlk_y)
{
	//varibale declarations
	int rlk_temp;
	//code
	printf("\n\n");
	
	printf("****** BEFORE SWAPPING ******\n\n");
	
	printf("Value Of 'X' = %d\n\n", rlk_x);
	
	printf("Value Of 'Y' = %d\n\n", rlk_y);
	rlk_temp = rlk_x;
	
	rlk_x = rlk_y;
	rlk_y = rlk_temp;
	
	printf("\n\n");
	printf("****** AFTER SWAPPING ******\n\n");
	printf("Value Of 'X' = %d\n\n", rlk_x);
	
	printf("Value Of 'Y' = %d\n\n", rlk_y);
}
