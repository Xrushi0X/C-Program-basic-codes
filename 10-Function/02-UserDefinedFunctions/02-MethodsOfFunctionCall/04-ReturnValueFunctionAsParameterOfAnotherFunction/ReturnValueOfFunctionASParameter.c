#include<stdio.h>
int main(int argc, char* argv[], char* envp[])
{
	int MyAddition(int, int);
	
	//variable
	int rlk_r;
	int rlk_num_01, rlk_num_02;


	//code
	rlk_num_01 = 10;
	rlk_num_02 = 20;
	printf("\n\n");
	
	printf("%d + %d= %d\n", rlk_num_01, rlk_num_02, MyAddition(rlk_num_01, rlk_num_02));
	
	printf("\n\n");

	return(0);
}
int MyAddition(int rlk_a, int rlk_b)
{
	int add(int, int);
	//code
	return(Add(rlk_a, rlk_b));
}
int add(int rlk_x, int rlk_y)
{
	//code
	return(rlk_x + rlk_y);
}




