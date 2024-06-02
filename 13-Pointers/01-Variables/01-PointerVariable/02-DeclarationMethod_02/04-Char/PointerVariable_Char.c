#include <stdio.h>
int main(void)
{
	//variable declarations
	char rlk_ch;
	char* rlk_ptr = NULL; 
	

	
	//code
	rlk_ch = 'A';
	printf("\n\n");
	printf(" ****** BEFORE ptr = &ch ******\n\n");
	printf("Value Of 'ch' = %c\n\n", rlk_ch);
	printf("Address Of 'ch' = %p\n\n", &rlk_ch);
	printf("Value At Address Of 'ch' = %c\n\n", *(&rlk_ch));

	rlk_ptr = &rlk_ch;
	printf("\n\n");
	printf(" ** AFTER ptr = &ch ***\n\n");
	printf("Value Of 'ch' = %c\n\n", rlk_ch);
	printf("Address Of 'ch' = %p\n\n", rlk_ptr);
	printf("Value At Address Of 'ch' = %c\n\n", *rlk_ptr);
	return(0);
}
