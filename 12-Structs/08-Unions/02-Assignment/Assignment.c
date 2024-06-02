#include <stdio.h>
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
	union MyUnion u1, u2;
	//code
	// *** MyUnion u2 ***
	printf("\n\n");
	printf("Members Of Union u1 Are : \n\n");
	u1.rlk_i = 6;
	u1.rlk_f = 1.2f;
	u1.rlk_d = 8.333333;
	u1.rlk_c = 'S';
	printf("u1.i = %d\n\n", u1.rlk_i);
	printf("u1.f = %f\n\n", u1.rlk_f);
	printf("u1.d = %lf\n\n", u1.rlk_d);
	printf("u1.c = %c\n\n", u1.rlk_c);
	printf("Addresses Of Members Of Union u1 Are : \n\n");
	printf("u1.i = %p\n\n", &u1.rlk_i);
	printf("u1.f = %p\n\n", &u1.rlk_f);
	printf("u1.d = %p\n\n", &u1.rlk_d);
	printf("u1.c = %p\n\n", &u1.rlk_c);
	printf("MyUnion u1 = %p\n\n", &u1);
	// *** MyUnion u2 ***
	printf("\n\n");
	printf("Members Of Union u2 Are : \n\n");
	u2.rlk_i = 3;
	printf("u2.i = %d\n\n", u2.rlk_i);
	u2.rlk_f = 4.5f;
	printf("u2.f = %f\n\n", u2.rlk_f);
	u2.rlk_d = 5.12764;
	printf("u2.d = %lf\n\n", u2.rlk_d);
	u2.rlk_c = 'A';
	printf("u2.c = %c\n\n", u2.rlk_c);
	printf("Addresses Of Members Of Union u2 Are : \n\n");
	printf("u2.i = %p\n\n", &u2.rlk_i);
	printf("u2.f = %p\n\n", &u2.rlk_f);
	printf("u2.d = %p\n\n", &u2.rlk_d);
	printf("u2.c = %p\n\n", &u2.rlk_c);
	printf("MyUnion u2 = %p\n\n", &u2);
	return(0);
}