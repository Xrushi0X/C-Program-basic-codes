#include <stdio.h>

void change_count_two_rlk(void)
{
	//code
	extern int global_count_rlk;
	global_count_rlk = global_count_rlk + 1;
	printf("change_count_two() : Value Of global_count in File_02 = %d\n",global_count_rlk);
}