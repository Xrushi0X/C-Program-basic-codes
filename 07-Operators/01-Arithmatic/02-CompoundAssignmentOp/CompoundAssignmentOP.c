#include<stdio.h>
int main(void)
{
	//variable declarations
	int rlk_a;
	int rlk_b;
	int rlk_x;

	//code
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &rlk_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &rlk_b);

	printf("\n\n");

	rlk_x = rlk_a;
	rlk_a += rlk_b; 
	printf("Addition Of A = %d And B = %d Gives %d.\n", rlk_x, rlk_b, rlk_a);

	rlk_x = rlk_a;
	rlk_a -= rlk_b; 
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", rlk_x, rlk_b, rlk_a);

	rlk_x = rlk_a;
	rlk_a *= rlk_b; 
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", rlk_x, rlk_b, rlk_a);

	
	rlk_x = rlk_a;
	rlk_a /= rlk_b;  
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", rlk_x, rlk_b, rlk_a);

	


	rlk_x = rlk_a;
	rlk_a %= rlk_b; 
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", rlk_x, rlk_b, rlk_a);

	printf("\n\n");

	return(0);
}