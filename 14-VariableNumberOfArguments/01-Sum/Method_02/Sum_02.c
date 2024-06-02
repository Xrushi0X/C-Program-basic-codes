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
	// function prototype
	int va_CalculateSum(int, va_list);

	// variable declarations
	int rlk_sum = 0;
	va_list rlk_numbers_list;

	// code
	va_start(rlk_numbers_list, num);

	rlk_sum = va_CalculateSum(num, rlk_numbers_list);

	va_end(rlk_numbers_list);
	return(rlk_sum);
}
int va_CalculateSum(int num, va_list list)
{
	// variable declaration
	int rlk_n;
	int rlk_sum_total = 0;
	// code
	while (num)
	{
		rlk_n = va_arg(list, int);
		rlk_sum_total = rlk_sum_total + rlk_n;
		num--;
	}

	return(rlk_sum_total);
}
