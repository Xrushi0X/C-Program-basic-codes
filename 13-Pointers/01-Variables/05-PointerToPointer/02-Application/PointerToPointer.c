#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_num;
	int* rlk_ptr = NULL;
	int** rlk_pptr = NULL;

		//code
		rlk_num = 10;
	printf("\n\n");
	printf(" ****** BEFORE ptr = &num ******\n\n");
	printf("Value Of 'num' = %d\n\n", rlk_num);
	printf("Address Of 'num' = %p\n\n", &rlk_num);
	printf("Value At Address Of 'num' = %d\n\n", *(&rlk_num));
	
	rlk_ptr = &rlk_num;
	printf("\n\n");
	printf(" ****** AFTER ptr = &num ******\n\n");
	printf("Value Of 'num' = %d\n\n", rlk_num);
	printf("Address Of 'num' = %p\n\n", rlk_ptr);
	printf("Value At Address Of 'num' = %d\n\n", *rlk_ptr);
	
		
	printf("\n\n");
	printf(" ****** AFTER pptr = &ptr ******\n\n");
	printf("Value Of 'num' = %d\n\n", rlk_num);
	printf("Address Of 'num' (ptr) = %p\n\n", rlk_ptr);
	printf("Address Of 'ptr' (pptr) = %p\n\n", rlk_pptr);
	printf("Value At Address Of 'ptr' (*pptr) = %p\n\n", *rlk_pptr);
	printf("Value At Address Of 'num' (*ptr) (*pptr) = %d\n\n", **rlk_pptr);
	return(0);
}
