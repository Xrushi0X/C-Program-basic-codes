#include <stdio.h> 


int main(int argc, char* argv[], char* envp[])
{
	//function prototype /declaration /signature
	
	int MyAddition(int, int);
	
	//variable declarations:local variables to main()
	int rlk_a, rlk_b, rlk_result;
	
	//code
	printf("\n\n");
	
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &rlk_a);
	
	printf("\n\n");
	
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &rlk_b);
	
	rlk_result = MyAddition(rlk_a, rlk_b); //function call
	
	printf("\n\n");
	
	printf("Sum Of %d And %d = %d\n\n", rlk_a, rlk_b, rlk_result);
	
	return(0);
}

int MyAddition(int a, int b) //function definition
{
	//variable declarations : local variables to MyAddition()
	int sum;
	
	//code
	sum = a + b;
	return(sum);
}