#include <stdio.h>
int main(void)
{
	//variable declarations
	int rlk_num;
	int* rlk_ptr = NULL;
	int rlk_ans;
	//code
	rlk_num = 5;
	rlk_ptr = &rlk_num;
	printf("\n\n");
	printf(" num = %d\n", rlk_num);
	printf(" &num = %p\n", &rlk_num);
	printf(" *(&num) = %d\n", *(&rlk_num));
	printf(" ptr = %p\n", rlk_ptr);
	printf(" *ptr = %d\n", *rlk_ptr);
	printf("\n\n");


		printf("Answer Of (ptr + 10) = %p\n", (rlk_ptr + 10));
	
		printf("Answer Of *(ptr + 10) = %d\n", *(rlk_ptr + 10));
	

		printf("Answer Of (*ptr + 10) = %d\n\n", (*rlk_ptr + 10));

		
		printf("Answer Of ++*ptr : %d\n", *rlk_ptr);
		
		*rlk_ptr++;
	printf("Answer Of *ptr++ : %d\n", *rlk_ptr);
	
	rlk_ptr = &rlk_num;
	
	(*rlk_ptr)++;
		
		printf("Answer Of (*ptr)++ : %d\n\n", *rlk_ptr);
	
	return(0);

}

