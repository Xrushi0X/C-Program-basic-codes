#include <stdio.h>
struct MyNumber
{
	int rlk_num;
	int rlk_num_table[10];
};
struct NumTables
{
	struct MyNumber rlk_n;
};
int main(void)
{
	//variable declarations
	struct NumTables tables[10]; //an array of 10 'struct NumTables'
	int rlk_i, rlk_j;
	//code
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	{
		tables[rlk_i].rlk_n.rlk_num = (rlk_i + 1);
	}
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
	{
		printf("\n\n");
		printf("Table Of %d : \n\n", tables[rlk_i].rlk_n.rlk_num);
		for (rlk_j = 0; rlk_j < 10; rlk_j++)
		{
			tables[rlk_i].rlk_n.rlk_num_table[rlk_j] = tables[rlk_i].rlk_n.rlk_num * (rlk_j + 1);
			printf("%d * %d = %d\n", tables[rlk_i].rlk_n.rlk_num, (rlk_j + 1), tables[rlk_i].rlk_n.rlk_num_table[rlk_j]);
		}
	}
	return(0);
}