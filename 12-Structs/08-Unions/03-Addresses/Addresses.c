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
	printf("Members Of Struct Are : \n\n");
	s.rlk_i = 9;
	s.rlk_f = 8.7f;
	s.rlk_d = 1.233422;
	s.rlk_c = 'P';
	printf("s.i = %d\n\n", s.rlk_i);
	printf("s.f = %f\n\n", s.rlk_f);
	printf("s.d = %lf\n\n", s.rlk_d);
	printf("s.c = %c\n\n", s.rlk_c);
	printf("Addresses Of Members Of Struct Are : \n\n");
	printf("s.i = %p\n\n", &s.rlk_i);
	printf("s.f = %p\n\n", &s.rlk_f);
	printf("s.d = %p\n\n", &s.rlk_d);
	printf("s.c = %p\n\n", &s.rlk_c);
	printf("MyStruct s = %p\n\n", &s);
	printf("\n\n");
	printf("Members Of Union Are : \n\n");
	u.rlk_i = 3;
	printf("u.i = %d\n\n", u.rlk_i);
	u.rlk_f = 4.5f;
	printf("u.f = %f\n\n", u.rlk_f);
	u.rlk_d = 5.12764;
	printf("u.d = %lf\n\n", u.rlk_d);
	u.rlk_c = 'A';
	printf("u.c = %c\n\n", u.rlk_c);
	printf("Addresses Of Members Of Union Are : \n\n");
	printf("u.i = %p\n\n", &u.rlk_i);
	printf("u.f = %p\n\n", &u.rlk_f);
	printf("u.d = %p\n\n", &u.rlk_d);
	printf("u.c = %p\n\n", &u.rlk_c);
	printf("MyUnion u = %p\n\n", &u);
	return(0);
}
