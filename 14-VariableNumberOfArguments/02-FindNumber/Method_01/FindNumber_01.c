#include <stdio.h>
#include <stdarg.h>
#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10
int main(void)
{
	// function prototypes
	void FindNumber(int, int, ...);

	// code
	printf("\n\n");

	FindNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 3, 5, 9, 2, 3, 6, 9, 3, 1, 3);

	return(0);
}
void FindNumber(int num_to_be_found, int num, ...) 
{
	// variable declarations
	int rlk_count = 0;
	int rlk_n;
	va_list rlk_numbers_list;

	// code
	va_start(rlk_numbers_list, num);

	while (num)
	{
		rlk_n = va_arg(rlk_numbers_list, int);
		if (rlk_n == num_to_be_found)
			rlk_count++;
		num--;
	}

	if (rlk_count == 0)
		printf("Number %d Could Not Be Found !!!\n\n", num_to_be_found);
	else
		printf("Number %d Found %d Times !!!\n\n", num_to_be_found, rlk_count);

	va_end(rlk_numbers_list);
}

