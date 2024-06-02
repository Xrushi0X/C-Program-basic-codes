#include <stdio.h>
int main(void)
{
	//variable declarations
	
	int rlk_num;
	
	int* rlk_ptr = NULL;
	int* rlk_copy_ptr = NULL;
	
	//code
	
	rlk_num = 5;
	
	rlk_ptr = &rlk_num;
	
	
	printf("\n\n");
	
	printf("****** BEFORE copy_ptr = ptr ******\n\n");
	
	printf(" num = %d\n", rlk_num);
	
	printf(" &num = %p\n", &rlk_num);
	
	printf(" *(&num) = %d\n", *(&rlk_num));
	
	printf(" ptr = %p\n", rlk_ptr);
	
	printf(" *ptr = %d\n", *rlk_ptr);
	
	
		
	printf("\n\n");
	
	printf("****** AFTER copy_ptr = ptr ******\n\n");
	
	printf(" num = %d\n", rlk_num);
	
	printf(" &num = %p\n", &rlk_num);
	
	printf(" *(&num) = %d\n", *(&rlk_num));
	
	printf(" ptr = %p\n", rlk_ptr);
	
	printf(" *ptr = %d\n", *rlk_ptr);
	
	printf(" copy_ptr = %p\n", rlk_copy_ptr);
	
	printf(" *copy_ptr = %d\n", *rlk_copy_ptr);
	
	return(0);

}
