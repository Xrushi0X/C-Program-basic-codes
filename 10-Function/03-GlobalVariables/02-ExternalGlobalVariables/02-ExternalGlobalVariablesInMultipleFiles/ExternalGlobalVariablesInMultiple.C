#include <stdio.h>


int rlk_global_count = 0;

int main(void)

{
	
	
	//function prototypes
	void rlk_change_count(void);
	void rlk_change_count_one(void);
	void rlk_change_count_two(void);
	
	
	
	//code
	printf("\n");
	rlk_change_count();
	rlk_change_count_one();
	rlk_change_count_two();
	return(0);
}


void rlk_change_count(void)
{
	//code

	rlk_global_count = rlk_global_count + 1;
	printf("Global Count = %d\n", rlk_global_count);
}

