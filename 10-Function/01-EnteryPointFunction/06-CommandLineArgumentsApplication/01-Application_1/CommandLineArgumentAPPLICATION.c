#include <stdio.h> 
#include <ctype.h> 
#include <stdlib.h> 


int main(int argc, char* argv[], char* envp[])


{
	
	
	//variable declarations
	
	int rlk_i;
	int rlk_num;
	int rlk_sum = 0;
	
	
	//code
	
	if (argc == 1)
	{
		printf("\n\n");
		printf("No Numbers Given For Addition !!! Exitting now ...\n\n");
		printf("Usage : CommandLineArgumentsApplication <first number> <secondnumber > ...\n\n");
			exit(0);
	}


	printf("\n\n");
	printf("Sum Of All Integer Command Line Arguments Is : \n\n");
	
	
	for (rlk_i = 1; rlk_i < argc; rlk_i++) 
	{
		rlk_num = atoi(argv[rlk_i]);
		rlk_sum = rlk_sum + rlk_num;
	
	}
	
	printf("Sum = %d\n\n", rlk_sum);
	return(0);
}
