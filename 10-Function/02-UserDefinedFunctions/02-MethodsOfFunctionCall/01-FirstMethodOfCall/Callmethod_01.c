#include <stdio.h> 
int main(int argc, char* argv[], char* envp[])
{
	
	
	//function prototypes OR declarations
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int, int);
	int MyDivision(int, int);
	
	
	//variable declarations
	int rlk_result_subtraction;
	int rlk_a_multiplication, rlk_b_multiplication;
	int rlk_a_division, rlk_b_division, rlk_result_division;
	//code
	
	
	// *** ADDITION ***
	MyAddition(); 
	
	
	// *** SUBTRACTION ***
	rlk_result_subtraction = MySubtraction();
	printf("\n\n");
	printf("Subtraction Yields Result = %d\n", rlk_result_subtraction);
	
	
	// *** MULTIPLICATION ***
	
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Multiplication : ");
	scanf("%d", &rlk_a_multiplication);
	printf("\n\n");
	printf("Enter Integer Value For 'B' For Multiplication : ");
	scanf("%d", &rlk_b_multiplication);
	MyMultiplication(rlk_a_multiplication, rlk_b_multiplication);
	
	
	// *** DIVISION ***
	printf("\n\n");
	printf("Enter Integer Value For 'A' For Division : ");
	scanf("%d", &rlk_a_division);
	printf("\n\n");
	printf("Enter Integer Value For 'B' For Division : ");
	scanf("%d", &rlk_b_division);
	rlk_result_division = MyDivision(rlk_a_division, rlk_b_division); 
	printf("\n\n");

	printf("Division Of %d and %d Gives = %d (Quotient)\n", rlk_a_division,rlk_b_division, rlk_result_division);
	printf("\n\n");
	
	return(0);
}

void MyAddition(void) 
{
	
	//variable declarations : local variables to MyAddition()
	int rlk_a, rlk_b, rlk_sum;
	
	//code
	printf("\n\n");
	
	printf("Enter Integer Value For 'A' For Addition : ");
	scanf("%d", &rlk_a);
	
	printf("\n\n");
	
	printf("Enter Integer Value For 'B' For Addition : ");
	scanf("%d", &rlk_b);
	
	rlk_sum = rlk_a + rlk_b;
	printf("\n\n");
	
	printf("Sum Of %d And %d = %d\n\n", rlk_a, rlk_b, rlk_sum);
}

int MySubtraction(void) 
{
	//variable declarations : local variables to MySubtraction()
	int rlk_a, rlk_b, rlk_subtraction;
	
	//code
	printf("\n\n");
	
	
	printf("Enter Integer Value For 'A' For Subtraction : ");
	
	scanf("%d", &rlk_a);
	
	printf("\n\n");
	
	printf("Enter Integer Value For 'B' For Subtraction : ");
	scanf("%d", &rlk_b);
	
	rlk_subtraction = rlk_a - rlk_b;
	return(rlk_subtraction);
}
void MyMultiplication(int rlk_a, int rlk_b)
{
	//variable declarations :local variables to MyMultiplication()
	int multiplication;
	
	//code
	
	multiplication = rlk_a * rlk_b;
	
	printf("\n\n");
	printf("Multiplication Of %d And %d = %d\n\n", rlk_a, rlk_b, multiplication);
}

int MyDivision(int rlk_a, int rlk_b)
{
	//variable declarations :local variables to MyDivision()
	int division_quotient;
	
	
	//code
	
	
	if (rlk_a > rlk_b)
	
		division_quotient = rlk_a / rlk_b;
	
	else
	
		division_quotient = rlk_b / rlk_a;
	
	return(division_quotient);


}
