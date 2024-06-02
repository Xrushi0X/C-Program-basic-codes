#include<stdio.h>


int main(void)
{
	//variable dec
	int rlk_i, rlk_j;
	char ch_01, ch_02;
	
	int rlk_a, result_int;
	float rlk_f, result_float;

	int i_explicit;
	float f_explicit;

	//code
	printf("\n\n");
	//interconversion and implicit type-casting between char and int TYPES

	rlk_i = 70;
	ch_01 = rlk_i;
	printf("I=%d\n", rlk_i);
	printf("Charater 1 (after ch_01 = rlk_i) = %c\n\n", ch_01);

	ch_02 = 'Q';
	rlk_j = ch_02;
	printf("Charater 2 =%c\n", ch_02);
	printf("J(after j = ch_02)=%d\n\n", rlk_j);

	// Implicite conversion of 'int' to float

	rlk_a = 5;
	rlk_f = 7.8f;
	result_float = rlk_a + rlk_f;

	printf("Integer rlk_a=%d And Floating-pont Number %f Added Gives Floating point Sum = %f\n\n", rlk_a, rlk_f, result_float);

	result_int = rlk_a + rlk_f;
	printf("Integer rlk_a=%d and floating Point number %f Added Gives Integer Sum  = %d\n\n", rlk_a, rlk_f, result_int);

	// Expicite type casting using operators
	 f_explicit = 30.1219955f;
	 i_explicit = (int)f_explicit;
	printf("Floating point Number WhichWll BE type Casted Explicitly =%f\n", f_explicit);
	printf("Resultant Integer After Explicit TYpe Casting of %f = %d\n\n", f_explicit,i_explicit);


	return(0);
}











