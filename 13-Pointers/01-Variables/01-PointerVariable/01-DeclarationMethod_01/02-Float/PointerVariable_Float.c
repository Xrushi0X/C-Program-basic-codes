#include <stdio.h>
int main(void)
{
	//variable declarations
	float rlk_num;
	float* rlk_ptr = NULL; 
	
	
	
	//code
	rlk_num = 6.9f;
	printf("\n\n");
	printf(" *** BEFORE ptr = &num ***\n\n");
	printf("Value Of 'num' = %f\n\n", rlk_num);
	printf("Address Of 'num' = %p\n\n", &rlk_num);
	printf("Value At Address Of 'num' = %f\n\n", *(&rlk_num));
	

	rlk_ptr = &rlk_num;
	printf("\n\n");
	printf(" * AFTER ptr = &num *\n\n");
	printf("Value Of 'num' = %f\n\n", rlk_num);
	printf("Address Of 'num' = %p\n\n", rlk_ptr);
	printf("Value At Address Of 'num' = %f\n\n", *rlk_ptr);
	return(0);
}
