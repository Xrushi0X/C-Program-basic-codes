#include <stdio.h>

extern int global_count_rlk;

void change_count_one_rlk_rlk(void)

{
	//code
	global_count_rlk = global_count_rlk + 1;
	printf("change_count_one() : Value Of global_count in File_01 = %d\n",global_count_rlk);
}