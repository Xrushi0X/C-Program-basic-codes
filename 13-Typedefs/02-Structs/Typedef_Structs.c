#include <stdio.h>
#define MAX_NAME_LENGTH 100
struct Employee
{
	char rlk_name[MAX_NAME_LENGTH];
	unsigned int rlk_age;
	char rlk_gender;
	double rlk_salary;
};
struct MyData
{
	int rlk_i;
	float rlk_f;
	double rlk_d;
	char rlk_c;
};
int main(void)
{
	// Typedefs
	typedef struct Employee MY_EMPLOYEE_TYPE;
	typedef struct MyData MY_DATA_TYPE;

	// variable declarations
	struct Employee emp = { "RUSHIKESH", 21, 'M', 10000.00 };
	MY_EMPLOYEE_TYPE emp_typedef = { "REENAL", 20, 'F', 20400.00 };

	struct MyData md = { 30, 11.45f, 26.122017, 'X' };
	MY_DATA_TYPE md_typedef;

	// code
	md_typedef.rlk_i = 9;
	md_typedef.rlk_f = 1.5f;
	md_typedef.rlk_d = 8.041997;
	md_typedef.rlk_c = 'P';
	printf("\n\n");
	printf("struct Employee : \n\n");
	printf("emp.name = %s\n", emp.rlk_name);
	printf("emp.age = %d\n", emp.rlk_age);
	printf("emp.gender = %c\n", emp.rlk_gender);
	printf("emp.salary = %lf\n", emp.rlk_salary);
	printf("\n\n");
	printf("MY_EMPLOYEE_TYPE : \n\n");
	printf("emp_typedef.name = %s\n", emp_typedef.rlk_name);
	printf("emp_typedef.age = %d\n", emp_typedef.rlk_age);
	printf("emp_typedef.gender = %c\n", emp_typedef.rlk_gender);
	printf("emp_typedef.salary = %lf\n", emp_typedef.rlk_salary);
	printf("\n\n");
	printf("struct MyData : \n\n");
	printf("md.i = %d\n", md.rlk_i);
	printf("md.f = %f\n", md.rlk_f);
	printf("md.d = %lf\n", md.rlk_d);
	printf("md.c = %c\n", md.rlk_c);
	printf("\n\n");
	printf("MY_DATA_TYPE : \n\n");
	printf("md_typedef.i = %d\n", md_typedef.rlk_i);
	printf("md_typedef.f = %f\n", md_typedef.rlk_f);
	printf("md_typedef.d = %lf\n", md_typedef.rlk_d);
	printf("md_typedef.c = %c\n", md_typedef.rlk_c);
	printf("\n\n");
	return(0);
}