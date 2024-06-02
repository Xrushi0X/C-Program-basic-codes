#include <stdio.h>
int main(void)
{
	//DEFINING STRUCT
	struct MyData
	{
		int rlk_i;
		float rlk_f;
		double rlk_d;
		char rlk_c;
	} data = { 5, 9.1f, 3.78623, 'N' };
	
	printf("\n\n");
	
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	
	printf("i = %d\n", data.rlk_i);
	
	printf("f = %f\n", data.rlk_f);
	
	printf("d = %lf\n", data.rlk_d);
	
	printf("c = %c\n\n", data.rlk_c);
	
	return(0);
}
