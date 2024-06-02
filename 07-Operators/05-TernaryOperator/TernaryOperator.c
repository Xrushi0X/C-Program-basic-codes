#include<stdio.h>

int main(void)
{
	//variable Decleration
	int rlk_a, rlk_b;
	int rlk_p, rlk_q;
	char ch_result_01, ch_result_02;
	int i_result_01, i_result_02;

	//code
	printf("\n\n");
	rlk_a = 7;
	rlk_b = 5;
	ch_result_01 = (rlk_a > rlk_b) ? 'A' : 'B';
	i_result_01 = (rlk_a > rlk_b) ? rlk_a : rlk_b;
	printf("Ternary Operators Answer 1-------------%c and %d.\n\n", ch_result_01, i_result_01);

	rlk_p = 30;
	rlk_q = 30;
	ch_result_02 = (rlk_p !=  rlk_q) ? 'P' : 'Q';
	i_result_02 = (rlk_p != rlk_q) ? rlk_p : rlk_q;
	printf("Ternary Operator Answer 2-----------------%c and %d.\n\n", ch_result_02, i_result_02);

	printf("\n\n");
	return(0);


}
