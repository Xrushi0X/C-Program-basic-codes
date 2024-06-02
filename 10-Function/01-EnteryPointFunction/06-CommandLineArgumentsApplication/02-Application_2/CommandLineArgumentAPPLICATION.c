#include <stdio.h> 
#include <stdlib.h> 
int main(int argc, char* argv[], char* envp[])
{
	
	//variable declarations
	
	int rlk_i;
	
	
	//code
	
	
	if (argc != 4) 
	{
		printf("\n\n");
		printf("Invalid Usage !!! Exitting Now ... \n\n");
		printf("Usage : CommandLineArgumentsApplication <first name> <middle name> < surname > \n\n");
		exit(0);
	
	}

	
		printf("\n\n");
		printf("Your Full Name Is : ");
		
		
		for (rlk_i = 1; rlk_i < argc; rlk_i++)
		{
			printf("%s ", argv[rlk_i]);
		}
		
		printf("\n\n");
		
		return(0);

}
