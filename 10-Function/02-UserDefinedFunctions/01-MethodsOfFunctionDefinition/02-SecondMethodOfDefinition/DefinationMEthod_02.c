#include <stdio.h> 

int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration / signature
	
	int MyAddition(void);
	
	//variable declarations : local variables to main()
	int rlk_result;
	
	//code
	rlk_result = MyAddition(); //function call
	
	printf("\n\n");
	printf("Sum = %d\n\n", rlk_result);
	
	return(0);
}

int MyAddition(void) //function definition
{
	
	//variable declarations : local variables to MyAddition()
	
	int rlk_a, rlk_b, rlk_sum;
	
	//code
	
	printf("\n\n");
	
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &rlk_a);
	
	printf("\n\n");
	
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &rlk_b);
	
	rlk_sum = rlk_a + rlk_b;
	return(rlk_sum);
}
