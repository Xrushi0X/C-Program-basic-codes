#include <stdio.h>
#include <stdarg.h>
int main(void)
{
	// function prototypes
	int CalculateSum(int, ...);

	// variable declarations
	int rlk_answer;

	// code
	printf("\n\n");

	rlk_answer = CalculateSum(5, 10, 20, 30, 40, 50);
	printf("Answer = %d\n\n", rlk_answer);

	rlk_answer = CalculateSum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	printf("Answer = %d\n\n", rlk_answer);
	rlk_answer = CalculateSum(0);
	printf("Answer = %d\n\n", rlk_answer);
	return(0);
}
int CalculateSum(int num, ...)
{
	// variable declarations
	int rlk_sum_total = 0;
	int rlk_n;

	va_list rlk_numbers_list;

	// code
	va_start(rlk_numbers_list, num);

	while (num)
	{
		rlk_n = va_arg(rlk_numbers_list, int);
		rlk_sum_total = rlk_sum_total + rlk_n;
		num--;
	}

	va_end(rlk_numbers_list);
	return(rlk_sum_total);
}

