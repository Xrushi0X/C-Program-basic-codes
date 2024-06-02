#include <stdio.h>

int main(void)
{

	int rlk_a = 5;

	void change_count_rlk(void);
	//code
	printf("\n");
	printf("A = %d\n\n", rlk_a);

	change_count_rlk();

	
		
		change_count_rlk();

	
		change_count_rlk();
	return(0);

}

void change_count_rlk(void)
{
	
	int local_count = 0;
	
	//code
	local_count = local_count + 1;
	printf("Local Count = %d\n", local_count);

}
