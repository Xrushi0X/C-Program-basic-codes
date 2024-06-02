#include <stdio.h>

int main(void)
{
	//function prototypes
	void rlk_change_count(void);
	
	//variable declarations
	
	extern int rlk_global_count;
	
	
	//code
	printf("\n");
	printf("Value Of global_count before change_count() = %d\n", rlk_global_count);
	rlk_change_count();
	printf("Value Of global_count after change_count() = %d\n", rlk_global_count);
	printf("\n");
	return(0);
}


int rlk_global_count = 0;
void rlk_change_count(void)
{
	//code
	rlk_global_count = 5;
	printf("Value Of global_count in change_count() = %d\n", rlk_global_count);
}

