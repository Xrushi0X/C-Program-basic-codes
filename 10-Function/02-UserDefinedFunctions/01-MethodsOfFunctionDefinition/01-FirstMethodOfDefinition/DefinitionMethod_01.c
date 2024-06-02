#include <stdio.h> 


int main(int argc, char* argv[], char* envp[])
{
	
	//function prototype /declaration /signature
	
	void MyAddition(void);
	
	//code
	
	MyAddition(); 
	return(0);
}
void MyAddition(void) 
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
	
	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", rlk_a, rlk_b, rlk_sum);
}