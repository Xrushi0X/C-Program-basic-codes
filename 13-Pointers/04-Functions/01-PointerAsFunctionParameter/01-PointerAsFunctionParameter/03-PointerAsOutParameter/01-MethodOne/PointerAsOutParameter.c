#include <stdio.h>
int main(void)
{
	//function declarations
	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);
	//variable declaration
	int rlk_a;
	int rlk_b;
	int rlk_answer_sum;
	int rlk_answer_difference;
	int rlk_answer_product;
	int rlk_answer_quotient;
	int rlk_answer_remainder;
	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &rlk_a);
	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &rlk_b);
	MathematicalOperations(rlk_a, rlk_b, &rlk_answer_sum, &rlk_answer_difference,&rlk_answer_product, &rlk_answer_quotient, &rlk_answer_remainder);
	
	
	printf("\n\n");
	printf("****** RESULTS ****** : \n\n");
	printf("Sum = %d\n\n", rlk_answer_sum);
	printf("Difference = %d\n\n", rlk_answer_difference);
	printf("Product = %d\n\n", rlk_answer_product);
	printf("Quotient = %d\n\n", rlk_answer_quotient);
	printf("Remainder = %d\n\n", rlk_answer_remainder);
	return(0);
}
void MathematicalOperations(int x, int y, int* sum, int* difference, int
	* product, int* quotient, int* remainder)
{
	//code
	*sum = x + y; 
	*difference = x - y;
	*remainder = x % y; 
}
