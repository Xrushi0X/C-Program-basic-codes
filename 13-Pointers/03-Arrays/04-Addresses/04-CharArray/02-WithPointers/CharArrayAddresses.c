#include <stdio.h>
int main(void)
{
	//variable declarations
	char rlk_cArray[10];
	char* rlk_ptr_cArray = NULL;
	int rlk_i;
	//code
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		rlk_cArray[rlk_i] = (char)(rlk_i + 65);


		
	rlk_ptr_cArray = rlk_cArray;
	printf("\n\n");
	
	printf("Elements Of The Character Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		
		printf("cArray[%d] = %c\n", rlk_i, *(rlk_ptr_cArray + rlk_i));
	
	printf("\n\n");
	
	printf("Elements Of The Character Array : \n\n");
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		printf("cArray[%d] = %c \t \t Address = %p\n", rlk_i, *(rlk_ptr_cArray + rlk_i),(rlk_ptr_cArray + rlk_i));

	
	printf("\n\n");
	
	return(0);

}
