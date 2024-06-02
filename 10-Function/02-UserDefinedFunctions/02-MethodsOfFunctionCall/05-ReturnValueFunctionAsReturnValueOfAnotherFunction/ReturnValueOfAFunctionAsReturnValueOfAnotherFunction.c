#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	// function prototypes OR declarations
		int MyAddition(int, int);
	// variable declarations
	int rlk_r;
	int rlk_num_01, rlk_num_02;
	// code
	rlk_num_01 = 10;
	rlk_num_02 = 20;
	printf("\n\n");
	printf("%d + %d = %d\n", rlk_num_01, rlk_num_02, MyAddition(rlk_num_01, rlk_num_02));
	printf("\n\n");
	return(0);
}

// *Function Definitio
int MyAddition(int rlk_a, int rlk_b)
{
int Add(int, int);
// code
return(Add(rlk_a, rlk_b));

}
int Add(int x, int y)

{
// code
return(x + y);
}

