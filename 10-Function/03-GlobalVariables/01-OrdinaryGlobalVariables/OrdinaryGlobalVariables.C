#include <stdio.h>

int rlk_global_count = 0;
int main(void)
{
	//function prototypes
	void rlk_change_count_one(void);
	void rlk_change_count_two(void);
	void rlk_change_count_three(void);
	//code
	
	printf("\n");
	printf("main() : Value of global_count = %d\n", rlk_global_count);
	rlk_change_count_one();
	
	rlk_change_count_two();
	rlk_change_count_three();

	
	printf("\n");
	return(0);
}


void rlk_change_count_one(void)

{
	
	//code
	rlk_global_count = 100;
	printf("change_count_one() : Value of global_count = %d\n", rlk_global_count);
}
	void rlk_change_count_two(void)


{
	//code
		rlk_global_count = rlk_global_count + 1;
	printf("change_count_two() : Value of global_count = %d\n", rlk_global_count);
}
void rlk_change_count_three(void)


{
	//code
	rlk_global_count = rlk_global_count + 10;
	printf("change_count_three() : Value of global_count = %d\n", rlk_global_count);
}