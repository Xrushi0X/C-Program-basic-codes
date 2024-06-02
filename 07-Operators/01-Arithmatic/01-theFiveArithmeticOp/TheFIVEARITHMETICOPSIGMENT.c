#include<stdio.h>

int main(void)
{
	//variable Declaration
	int rlk_a; 
	int rlk_b;
	int result;


	//code

	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &rlk_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &rlk_b);

	printf("\n\n");

	result = rlk_a + rlk_b;
	printf("Addition of A = %d And B= %d Gives %d.\n", rlk_a, rlk_b, result);

	result = rlk_a - rlk_b;
	printf("Subtraction of A = %d And B= %d Gives %d.\n", rlk_a, rlk_b, result);

	result = rlk_a * rlk_b;
	printf("Multiplication of A = %d And B= %d Gives %d.\n", rlk_a, rlk_b, result);
	
	result = rlk_a / rlk_b;
	printf("Dividion of A = %d And B= % d Gives Quotient %d.\n", rlk_a, rlk_b, result);

	result = rlk_a % rlk_b;
	printf("Divison of A = %d And B= %d Gives Remainder %d.\n", rlk_a, rlk_b, result);

	printf("\n\n");

	return(0);



}