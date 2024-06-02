#include <stdio.h>
#include <conio.h>
struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_ch;
};
int main(void)
{
	//variable declarations
	struct MyData data; 
	//code
	
	printf("\n\n");
	printf("Enter Integer Value For Data Member 'i' Of 'struct MyData' : \n");
	
	scanf("%d", &data.rlk_i);
	
	printf("Enter Floating-Point Value For Data Member 'f' Of 'struct MyData' :	\n");
		
		scanf("%f", &data.rlk_f);
	
	printf("Enter 'Double' Value For Data Member 'd' Of 'struct MyData' : \n");
	scanf("%lf", &data.rlk_d);
	
	printf("Enter Character Value For Data Member 'c' Of 'struct MyData' : \n");
	data.rlk_ch = getch();
	
	
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	
	printf("i = %d\n", data.rlk_i);
	
	printf("f = %f\n", data.rlk_f);
	
	printf("d = %lf\n", data.rlk_d);
	
	printf("c = %c\n\n", data.rlk_ch);
	
	return(0);
}
