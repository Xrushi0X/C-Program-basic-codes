#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_num;
	int* ptr = NULL; 
	//code
	
	rlk_num = 10;
	printf("\n\n");
	printf(" ****** BEFORE ptr = &num ******\n\n");
	printf("Value Of 'num' = %d\n\n", rlk_num);
	printf("Address Of 'num' = %p\n\n", &rlk_num);
	printf("Value At Address Of 'num' = %d\n\n", *(&rlk_num));

	ptr = &rlk_num;
	printf("\n\n");
	printf(" ****** AFTER ptr = &num ******\n\n");
	printf("Value Of 'num' = %d\n\n", rlk_num);
	printf("Address Of 'num' = %p\n\n", ptr);
	printf("Value At Address Of 'num' = %d\n\n", *ptr);
	return(0);
}
