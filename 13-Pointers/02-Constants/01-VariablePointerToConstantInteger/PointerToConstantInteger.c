#include <stdio.h>
int main(void)
{
	// variable declarations
	int rlk_num = 5;
	const int* rlk_ptr = NULL;

	//code
	rlk_ptr = &rlk_num;
	printf("\n");
	printf("Current Value of 'num' = %d\n", rlk_num);
	printf("Current 'ptr' (Address of 'num) = %p\n", rlk_ptr);

	rlk_num++;
	printf("\n\n");
	printf("After num++, value of 'num' =%d\n", rlk_num);

	rlk_ptr++;
	printf("\n\n");
	printf("After ptr++, value of 'ptr' %p\n", rlk_ptr);
	printf("Value at this new'ptr' = %d\n", *rlk_ptr);
	printf("\n");
	return(0);
}

