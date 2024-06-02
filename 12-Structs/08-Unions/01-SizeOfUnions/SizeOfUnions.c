#include <stdio.h>
struct MyStruct
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
};
union MyUnion
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
};
int main(void)
{
	//variable declarations
	struct MyStruct s;
	union MyUnion u;
	//code
	printf("\n\n");
	printf("Size Of MyStruct = %lu\n", sizeof(s));
	printf("\n\n");
	printf("Size Of MyUnion = %lu\n", sizeof(u));
	return(0);
}