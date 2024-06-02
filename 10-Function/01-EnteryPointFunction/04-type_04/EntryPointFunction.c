#include <stdio.h> 

int main(int argc, char* argv[])
{
	
	//variable declarations
	
	int rlk_i;
	
	//code
	
	printf("\n\n");
	printf("Hello World !!!\n\n"); //Library function
	printf("Number Of Command Line Arguments = %d\n\n", argc);
	printf("Command Line Arguments Passed To This Program Are :- \n\n");
	
	for (rlk_i = 0; rlk_i < argc; rlk_i++)
	
	{
		printf("Command Line Argument Number %d = %s\n", (rlk_i + 1), argv[rlk_i]);
	}
	
	
	printf("\n\n");
	
	return(0);

}

