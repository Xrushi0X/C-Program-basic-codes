#include <stdio.h>

struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
};
int main(void)
{
  	//variable declarations

	struct MyData data_one = { 35, 3.9f, 1.23765, 'A' };

	struct MyData data_two = { 'R', 6.2f, 12.199523, 68 };

	struct MyData data_three = { 36, 'K' };

	struct MyData data_four = { 79 };

	//code

	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_one' ARE : \n\n");
	printf("i = %d\n", data_one.rlk_i);
	printf("f = %f\n", data_one.rlk_f);
	printf("d = %lf\n", data_one.rlk_d);

	printf("c = %c\n", data_one.rlk_c);
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_two' ARE : \n\n");
	printf("i = %d\n", data_two.rlk_i);
	printf("f = %f\n", data_two.rlk_f);
	printf("d = %lf\n", data_two.rlk_d);
	printf("c = %c\n", data_two.rlk_c);
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_three' ARE : \n\n");
	printf("i = %d\n", data_three.rlk_i);
	printf("f = %f\n", data_three.rlk_f);
	printf("d = %lf\n", data_three.rlk_d);
	printf("c = %c\n", data_three.rlk_c);
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData data_four' ARE : \n\n");
	printf("i = %d\n", data_four.rlk_i);
	printf("f = %f\n", data_four.rlk_f);
	printf("d = %lf\n", data_four.rlk_d);
	printf("c = %c\n", data_four.rlk_c);
	return(0);
}