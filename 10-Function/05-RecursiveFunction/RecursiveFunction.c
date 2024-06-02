#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	// variable declarations
	
	unsigned int rlk_num;

	// function prototype
	void recursive(unsigned int);

	// code
	printf("\n\n");
	printf("Enter Any Number : \n\n");
	scanf("%u", &rlk_num);

	printf("\n\n");
	printf("Output Of Recursive Function : \n\n");

	recursive(rlk_num);
	printf("\n\n");
	return(0);

}


void recursive(unsigned int rlk_n)
{
	// code

	printf("n = %d\n", rlk_n);

	
	if (rlk_n > 0)
	{
		recursive(rlk_n - 1);
	}


}
