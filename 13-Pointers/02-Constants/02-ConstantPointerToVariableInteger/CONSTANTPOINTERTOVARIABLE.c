#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_num = 5;
	int* const ptr = &rlk_num;
	//code
	printf("\n");
	printf("Current Value of 'num' - %d\n", rlk_num);
	printf("Current 'ptr' (Address of 'num') = %p\n", ptr);

	rlk_num++;
	printf("\n\n");
	printf("After num++, value of 'num' = %d\n", rlk_num);


	
		
		
	(*ptr)++;
	printf("\n\n");
	printf("After (*ptr) ++, value of 'ptr' = %p\n", ptr);
	printf("Value at this 'ptr' = %d\n", *ptr);
	printf("\n");
	return(0);
}

