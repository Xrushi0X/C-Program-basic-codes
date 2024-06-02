#include <stdio.h>
struct MyNumber
{
	int rlk_num;
	int rlk_num_table[10];
};
struct NumTables
{
	struct MyNumber rlk_a;
	struct MyNumber rlk_b;
	struct MyNumber rlk_c;
};
int main(void)
{
	//variable declarations
	struct NumTables tables;
	int rlk_i;
	//code
	
	tables.rlk_a.rlk_num = 2;
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		tables.rlk_a.rlk_num_table[rlk_i] = tables.rlk_a.rlk_num * (rlk_i + 1);
	
	printf("\n\n");
	
	printf("Table Of %d : \n\n", tables.rlk_a.rlk_num);
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		printf("%d * %d = %d\n", tables.rlk_a.rlk_num, (rlk_i + 1), tables.rlk_a.rlk_num_table[rlk_i]);
	
	tables.rlk_b.rlk_num = 3;
	
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		tables.rlk_b.rlk_num_table[rlk_i] = tables.rlk_b.rlk_num * (rlk_i + 1);
	printf("\n\n");
	
	printf("Table Of %d : \n\n", tables.rlk_b.rlk_num);
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		printf("%d * %d = %d\n", tables.rlk_b.rlk_num, (rlk_i + 1), tables.rlk_b.rlk_num_table[rlk_i]);
	tables.rlk_c.rlk_num = 4;
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		tables.rlk_c.rlk_num_table[rlk_i] = tables.rlk_c.rlk_num * (rlk_i + 1);
	printf("\n\n");
	printf("Table Of %d : \n\n", tables.rlk_c.rlk_num);
	
	
	for (rlk_i = 0; rlk_i < 10; rlk_i++)
		printf("%d * %d = %d\n", tables.rlk_c.rlk_num, (rlk_i + 1), tables.rlk_c.rlk_num_table[rlk_i]);
	return(0);
}
