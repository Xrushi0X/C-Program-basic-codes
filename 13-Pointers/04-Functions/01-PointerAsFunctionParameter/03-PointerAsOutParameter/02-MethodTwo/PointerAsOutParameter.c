#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//function declarations
	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);
	//variable declaration
	int rlk_a;
	int rlk_b;
	int* rlk_answer_sum = NULL;
	int* rlk_answer_difference = NULL;
	int* rlk_answer_product = NULL;
	int* rlk_answer_quotient = NULL;
	int* rlk_answer_remainder = NULL;
	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &rlk_a);
	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &rlk_b);	rlk_answer_sum = (int*)malloc(1 * sizeof(int));
	if (rlk_answer_sum == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_sum'. Exitting Now...\n\n");
			exit(0);
	}
	rlk_answer_difference = (int*)malloc(1 * sizeof(int));
	if (rlk_answer_difference == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_difference'. Exitting Now...\n\n");
			exit(0);
	}
	rlk_answer_product = (int*)malloc(1 * sizeof(int));
	if (rlk_answer_product == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_product'. Exitting Now...\n\n");
			exit(0);
	}
	rlk_answer_quotient = (int*)malloc(1 * sizeof(int));
	if (rlk_answer_quotient == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_quotient'. Exitting Now...\n\n");
			exit(0);
	}
	rlk_answer_remainder = (int*)malloc(1 * sizeof(int));
	if (rlk_answer_remainder == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_remainder'. Exitting Now...\n\n");
			exit(0);
	}
	MathematicalOperations(rlk_a, rlk_b, rlk_answer_sum, rlk_answer_difference,rlk_answer_product, rlk_answer_quotient, rlk_answer_remainder);
	printf("\n\n");
	printf("****** RESULTS ****** \n\n");
	printf("Sum = %d\n\n", *rlk_answer_sum);
	printf("Difference = %d\n\n", *rlk_answer_difference);
	printf("Product = %d\n\n", *rlk_answer_product);
	printf("Quotient = %d\n\n", *rlk_answer_quotient);
	printf("Remainder = %d\n\n", *rlk_answer_remainder);
	if (rlk_answer_remainder)
	{
		free(rlk_answer_remainder);
		rlk_answer_remainder = NULL;
		printf("Memory Allocated For 'answer_remainder' Successfully Freed !!!\n\n");
	}
	if (rlk_answer_quotient)
	{
		free(rlk_answer_quotient);
		rlk_answer_quotient = NULL;
		printf("Memory Allocated For 'answer_quotient' Successfully Freed !!!\n\n");
	}
	if (rlk_answer_product)
	{
		free(rlk_answer_product);
		rlk_answer_product = NULL;
		printf("Memory Allocated For 'answer_product' Successfully Freed !!!\n\n");
	}
	if(rlk_answer_difference)
	{
		free(rlk_answer_difference);
		rlk_answer_difference = NULL;
		printf("Memory Allocated For 'answer_difference' SuccessfullyFreed !!!\n\n");
	}
	if (rlk_answer_sum)
	{
		free(rlk_answer_sum);
		rlk_answer_sum = NULL;
		printf("Memory Allocated For 'answer_sum' Successfully Freed !!!\n\n");
	}
	return(0);
}
void MathematicalOperations(int rlk_x, int rlk_y, int* rlk_sum, int* rlk_difference, int* rlk_product, int* rlk_quotient, int* rlk_remainder)
{
	//code
	*rlk_sum = rlk_x + rlk_y;
	*rlk_difference = rlk_x - rlk_y;
	*rlk_product = rlk_x * rlk_y;
	*rlk_quotient = rlk_x / rlk_y;
	*rlk_remainder = rlk_x % rlk_y;
}

